#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int idx=2*(k-1);
    return numbers[idx%numbers.size()];
}