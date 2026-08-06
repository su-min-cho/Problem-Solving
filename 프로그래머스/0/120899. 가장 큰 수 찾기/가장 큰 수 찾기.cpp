#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    auto it = max_element(array.begin(),array.end());
    int max_val = *it;
    int max_idx = distance(array.begin(),it);
    return {max_val, max_idx};
}