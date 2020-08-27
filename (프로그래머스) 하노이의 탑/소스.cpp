#include <iostream>
#include <string>
#include <vector>


using namespace std;

vector<vector<int>> answer;

void h(int n, int a, int b, int c) {
    if (!n) return;
    else {
        h(n - 1, a, c, b);
        answer.push_back(vector<int>{a, b});
        h(n - 1, c, b, a);
    }
}
vector<vector<int>> solution(int n) {
    h(n, 1, 3, 2);
    return answer;
}

int main() {
    int n = 3;
    vector<vector<int>> ans = solution(2);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout<<ans[i][j] << " ";
        }
    }
}