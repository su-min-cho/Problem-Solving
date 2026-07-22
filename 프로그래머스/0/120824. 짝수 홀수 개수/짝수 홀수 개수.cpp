#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int even_count=0, odd_count=0;
    for(int num : num_list){
        if(num%2==0) even_count++;
        else                 odd_count++;
    }
    return {even_count, odd_count};
}