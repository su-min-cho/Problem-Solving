#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int mult1 = numbers[0]*numbers[1];
    int mult2 = numbers[numbers.size()-1]*numbers[numbers.size()-2];
    return max(mult1, mult2);
}