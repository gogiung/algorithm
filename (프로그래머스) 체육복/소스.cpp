#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;
// n= 5   lost= 2,4   reserve= 1,3,5
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> check(n, 1);
    for (auto l : lost)        check[l - 1]--;
    for (auto r : reserve)        check[r - 1]++;
    for (int i = 0; i < check.size(); i++) {
        if (check[i]==0) {
            if (i != check.size() - 1 && check[i + 1] == 2) {
                check[i + 1]--;
                check[i]++;
            }
            else if (check[i - 1] == 2) {
                check[i - 1]--;
                check[i]++;
            }
        }
    }
    for (auto a : check)
        if (a != 0)    answer++;
    return answer;
}

int main() {
    int n = 5;
    vector<int> lost = { 2,4 };
    vector<int> reserve = { 1,3,5 };
    int ans = solution(n, lost, reserve);
    cout << ans;
}