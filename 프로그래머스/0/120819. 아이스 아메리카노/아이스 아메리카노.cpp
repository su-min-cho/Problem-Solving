#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    int num, remain;
    num=money/5500;
    remain=money%5500;

    return {num,remain};
}