#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer_cp = 0;

bool check_queen(vector<int> q, int idx) {
    // ���� �밢�� üũ
    for (int i = 0; i < idx; i++) {
        if (q[i] == q[idx]) return false;
        if (abs(q[i] - q[idx]) == abs(i - idx)) return false;
    }
    return true;
}

void make_queen(vector<int> q, int cnt) {
    if (cnt == q.size()) {
        answer_cp++; // ���� ����
        return;
    }
    for (int i = 0; i < q.size(); i++) {
        q[cnt] = i;
        if (check_queen(q, cnt))
            make_queen(q, cnt + 1);
    }
}

int solution(int n) {
    int answer = 0;
    vector<int> q(n);
    make_queen(q, 0);
    answer = answer_cp;
    return answer;
}
int main() {
    int n = 4;
    int ans = solution(n);
    cout << ans;
}