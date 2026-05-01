#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 0; i < (n+1)/2; i++)
    {
        answer.push_back(i*2+1);
    }
    return answer;
}