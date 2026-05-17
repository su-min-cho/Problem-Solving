#include <cmath>

using namespace std;

int solution(int n) {
    double num = n/7.0;
    double result = std::ceil(num);
    
    return result;
}