#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> answer;
    deque<int> dq;
    string opr;
    int num;

    for (int i = 0; i < operations.size(); i++) {
        opr = operations[i];
        num = stoi(opr.substr(2));

        if (opr[0] == 'I') {
            dq.push_back(num);
            sort(dq.begin(), dq.end());
        }
        else {
            if (dq.empty())
                continue;
            if (num == 1) {
                dq.pop_back();
            }
            else {
                dq.pop_front();
            }
        }
    }

    if (dq.empty()) {
        answer.push_back(0);
        answer.push_back(0);
    }
    else {
        answer.push_back(dq.back());
        answer.push_back(dq.front());
    }

    return answer;
}


int main() {
    vector<string> operations = { "I 7","I 5","I -5","D -1" };
    vector<int> ans = solution(operations);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}