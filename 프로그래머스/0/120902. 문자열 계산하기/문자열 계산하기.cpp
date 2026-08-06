#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    string word;
    string tmp;
    bool first=true;
    
    while(ss>>word){
        if(first==true) {
            answer+=stoi(word);
            first=false;
        }
        if(tmp == "-"){
            answer-=stoi(word);
        }
        else if(tmp == "+"){
            answer+=stoi(word);
        }
        tmp = word;
    }
    return answer;
}