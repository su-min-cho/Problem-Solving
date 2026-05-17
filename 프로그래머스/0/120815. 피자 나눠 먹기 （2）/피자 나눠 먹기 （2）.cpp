#include <string>
#include <vector>

using namespace std;

int gcd(int n, int a){
    while(a!=0){
        int result = n % a;
        n = a;
        a = result;
    }
    return n;
}


int solution(int n) {
    int lcm = (n*6)/gcd(n,6);
    int result = lcm/6;
    
    return result;
}