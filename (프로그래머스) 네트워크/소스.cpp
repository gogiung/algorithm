#include <string>
#include <vector>
#include <iostream>

using namespace std;

int net[201][201];
int check[201];
void dfs(int x, int n) {
    check[x] = 1;

    for (int i = 0; i < n; i++) {
        if (net[x][i] == 1 && check[i] == 0) {
            dfs(i, n);
        }
   }
}

int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (computers[i][j] == 1)
                net[i][j] = 1;
        }
    }

    for (int i = 0; i < n; i++) {
        if (check[i] == 0) {
            dfs(i, n);
            answer++;
        }
    }
    return answer;
}

int main() {
    int n = 3;
    vector<vector<int>> computers = { {1, 1, 0},{1, 1, 0},{0, 0, 1} };
    int ans = solution(n, computers);
    cout << ans;
}

