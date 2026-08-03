#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    stringstream ss(s);
    string token;
    int pre_num=0;
    while(ss>>token){
        if(token=="Z"){
            answer-=pre_num;
        }
        else {
            int current_num = stoi(token);
            answer += current_num;
            pre_num = current_num;
        }
    }
    return answer;
}