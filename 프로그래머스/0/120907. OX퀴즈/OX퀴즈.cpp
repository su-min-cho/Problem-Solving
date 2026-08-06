#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int num1, num2, result;
    char op, equal;
    for(int i = 0; i < quiz.size(); i++){
        stringstream ss(quiz[i]);
        while(ss>>num1>>op>>num2>>equal>>result){
            if(op=='+'){
                if((num1+num2)==result) answer.push_back("O");
                else answer.push_back("X");
            }
            else if(op=='-'){
                if((num1-num2)==result) answer.push_back("O");
                else answer.push_back("X");
            }
        }
    }
    return answer;
}