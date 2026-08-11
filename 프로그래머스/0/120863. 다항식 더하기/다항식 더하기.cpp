#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    stringstream ss(polynomial);
    string term;
    int num_answer=0;
    int x_answer=0;
    string answer="";
    
    while(ss>>term){
        if(term=="x") x_answer++;
        else if(term.back()=='x'){
            x_answer+=stoi(term.substr(0,term.length()-1));
        }
        else if(term != "+") num_answer+=stoi(term);
    }
    
    if(x_answer==1) answer+='x';
    else if(x_answer>=2) answer+=to_string(x_answer)+'x';
    
    if(num_answer>0) {
        if(answer!=""){
            answer+= " + " + to_string(num_answer);
        }
        else {
            answer+=to_string(num_answer);
        }
    }
        
    return answer;
}