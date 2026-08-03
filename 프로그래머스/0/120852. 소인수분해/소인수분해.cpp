#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 2; i<=n;i++){
        while(n%i==0) {
            n/=i;
            if (answer.empty() || answer.back() != i) {
                answer.push_back(i);
            }
        }
    }
    return answer;
}