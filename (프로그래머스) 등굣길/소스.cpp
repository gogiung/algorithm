#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int MAX = 110;
int map[MAX][MAX] ;
int ans[MAX][MAX];

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    for (int i = 0; i < puddles.size(); i++) {
        map[puddles[i][1]][puddles[i][0]] = 1;
    }

    ans[1][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (map[i][j] == 1) {
                ans[i][j] = 0;
            }
            else {
                ans[i][j] = (ans[i - 1][j] + ans[i][j - 1]) % 1000000007;
            }
        }
    }

    answer = ans[n][m];
    return answer;
}

int main() {
    int m = 4;
    int n = 3; 
    vector<vector<int>> puddles = { {2,2} };
    int ans1 = solution(m, n, puddles);
    cout << ans1;
}