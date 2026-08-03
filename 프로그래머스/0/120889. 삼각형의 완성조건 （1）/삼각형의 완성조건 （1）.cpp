#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int sum=0;
    int max_side = sides[0];
    for(auto a : sides){
        if(max_side<a) max_side=a;
        sum+=a;
    }
    if(max_side<sum-max_side) return 1;
    else return 2;
}