#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string str_num = to_string(num);
    for(int i = 0; i < str_num.length(); i++){
        if(str_num[i]==to_string(k)[0]) {
            answer=i+1;
            break;
        }
    }
    return answer;
}