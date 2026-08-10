#include <string>
#include <vector>

using namespace std;


int solution(string str1, string str2) {
    if(str1.size()<str2.size()) return 2;
    else if(str2.size()==1){
        for(int i = 0; i < str1.size(); i++){
            if(str1[i]==str2[0]) return 1;
        }
        return 2;
    }
    
    for(int i = 0; i <= str1.size()-str2.size(); i++){
        if(str1[i]==str2[0]){
            for(int j = 1; j < str2.size(); j++){
                if(str1[i+j]!=str2[j]) break;
                if(j==str2.size()-1) return 1;
            }
        }
    }
    return 2;
}