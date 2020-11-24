#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % divisor == 0) {
            answer.push_back(arr[i]);
        }
    }
    sort(answer.begin(), answer.end());
    if (answer.empty()) {
        answer.push_back(-1);
    }
    return answer;
}

int main() {
    vector<int> arr = { 5,9,7,10 };
    int divisor = 5;
    vector<int> ans = solution(arr, divisor);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<" ";
    }
}