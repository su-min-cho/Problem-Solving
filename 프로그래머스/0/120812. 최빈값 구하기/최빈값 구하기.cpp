#include <vector>

using namespace std;

int solution(vector<int> array) {
    vector<int> count(1000);
    for(int i = 0; i < array.size(); i++)
    {
        count[array[i]]++;
    }
    int max_count = count[0];
    int max_num = 0;
    for(int i = 1; i < count.size(); i++)
    {
        if(count[i]>max_count)
        {
            max_count = count[i];
            max_num = i;
        }
    }
    for(int i = 0; i < count.size(); i++)
    {
        if(i != max_num && count[i] == max_count)
            return -1;
    }
    return max_num;
}