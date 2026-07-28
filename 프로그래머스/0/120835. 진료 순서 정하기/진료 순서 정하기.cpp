#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> arr;
    for(int i = 0; i<emergency.size(); i++){
        arr.push_back(emergency[i]);
    }
    for(int i = 0; i<arr.size()-1; i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i]<arr[j]){
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
    }
    for(int i = 0; i<emergency.size(); i++){
        int target = emergency[i];
        auto it = find(arr.begin(), arr.end(), target);
        int index = it - arr.begin();
        answer.push_back(index+1);
    }
    return answer;
}