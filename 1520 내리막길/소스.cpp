#include <iostream>

using namespace std;

int map[500 + 1][500 + 1];
int dp[500 + 1][500 + 1];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };

int n, m;


int DFS(int x, int y)
{
    if (x == 1 && y == 1) return 1;

    if (dp[x][y] == -1) {
        dp[x][y] = 0;

        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + x;
            int ny = dy[i] + y;

            if (nx >= 1 && nx <= m && ny >= 1 && ny <= n) {
                if (map[x][y] < map[nx][ny])
                    dp[x][y] += DFS(nx, ny);
            }
        }
    }

    return dp[x][y];
}

int main(void)
{
    cin >> m >> n;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
            dp[i][j] = -1;
        }
    }

    cout << DFS(m, n);

}
