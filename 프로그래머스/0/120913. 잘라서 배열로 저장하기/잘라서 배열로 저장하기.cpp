#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    string tmp;
    for(int i = 0; i < my_str.length(); i+=n){
        for(int j = i; j < i+n; j++){
            if(j<my_str.length()) {
                tmp+=my_str[j];
            }
        }
        answer.push_back(tmp);
        tmp="";
    }
    return answer;
}