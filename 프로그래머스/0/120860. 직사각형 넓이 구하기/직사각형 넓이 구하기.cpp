#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> dots) {
    int width=0;
    int height=0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i!=j && dots[i][0]==dots[j][0]){
                width = abs(dots[i][1]-dots[j][1]);
            }
            if(i!=j && dots[i][1]==dots[j][1]){
                height = abs(dots[i][0]-dots[j][0]);
            }
        }
    }
    return width*height;
}