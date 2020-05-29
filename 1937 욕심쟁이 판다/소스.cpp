#include<iostream>
#include<algorithm>

using namespace std;

int dp[500][500];
int map[500][500];

int n;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int len = 0;

int dfs(int x, int y) {
	if (dp[x][y]) {
		return dp[x][y];
	}

	dp[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		
		if (ny < 0 || ny >= n || nx < 0 || nx >= n)
			continue;

		if (map[x][y] >= map[nx][ny])
			continue;

		dp[x][y] = max(dp[x][y], dfs(nx, ny) + 1);
	}

	return dp[x][y];

	
}


int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	int ans = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans = max(ans, dfs(i, j));
		}
	}

	cout << ans;
}