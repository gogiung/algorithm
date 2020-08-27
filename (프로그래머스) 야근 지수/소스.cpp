#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

long long solution(int n, vector<int> works) {
    priority_queue<int> q(works.begin(), works.end());

    for (int i = 0; i < n; i++) {
        if (q.top() > 0) {
            int tmp = q.top();
            q.pop();
            q.push(tmp - 1);
        }
    }
    // 마지막으로, 남은 작업량으로 피로도를 계산한다.
    long long answer = 0;
    while (!q.empty()) {
        answer += q.top() * q.top();
        q.pop();
    }
    return answer;
}

int main() {
    int n = 4;
    vector<int> works = { 4,3,3 };
    long long ans = solution(n, works);
    cout << ans;
}