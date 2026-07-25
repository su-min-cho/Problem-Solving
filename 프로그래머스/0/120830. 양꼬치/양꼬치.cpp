#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    int num=n/10;
    answer=n*12000+(k-num)*2000;
    return answer;
}