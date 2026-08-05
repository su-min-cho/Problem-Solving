#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int min=100;
    int answer=0;
    sort(array.begin(), array.end());
    for(int i = array.size()-1;i>=0;i--){
        if(abs(array[i]-n)<=min) {
            min=array[i]-n;
            answer=array[i];
        }
    }
    return answer;;
}