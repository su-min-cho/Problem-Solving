#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int numer, denom, a, b, r;
    numer = numer1 * denom2 + numer2 * denom1;
    denom = denom1 * denom2;
    a = numer;
    b = denom;
    
    do{
        r=a%b;
        a=b;
        b=r;
    } while (r!=0);
    
    numer = numer/a;
    denom = denom/a;
    
    answer.push_back(numer);
    answer.push_back(denom);
    
    return answer;
}