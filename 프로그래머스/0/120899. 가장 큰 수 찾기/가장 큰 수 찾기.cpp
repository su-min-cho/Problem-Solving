#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array) {
    int max=array[0];
    int max_idx=0;
    for(int i = 1; i < array.size(); i++){
        if(max<array[i]) {
            max=array[i];
            max_idx=i;
        }
    }
    return {max, max_idx};
}