#include <string>
#include <vector>

using namespace std;

int solution(int n, int t) {
    while(t>0){
        n*=2;
        t--;
    }
    return n;
}