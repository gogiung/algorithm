#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> weight) {
    int answer = 1;
    sort(weight.begin(), weight.end());
    for (auto w : weight) {
        if (answer < w) {
            break;
        }

        answer += w;
    }
    return answer;
}

int main() {
    vector<int> weight = { 1, 1, 2, 3, 6, 7, 30 };
    int ans = solution(weight);

    cout << ans;
}