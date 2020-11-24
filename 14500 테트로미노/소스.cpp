#include <iostream>
#include <algorithm>

using namespace std;

const int MAX = 500;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0};

int n, m;
int cell[MAX][MAX];
bool visit[MAX][MAX];

int dfs(int x, int y, int cnt) {
	if (cnt == 4) {
		return cell[x][y];
	}
	int sum = 0;

	for (int i = 0; i < 4; i++) {
		int nextx = x + dx[i];
		int nexty = y + dy[i];

		if (nexty >= 0 && nexty < m && nextx >= 0 && nextx < n &&!visit[nextx][nexty]) {
			visit[nextx][nexty] = true;
			sum = max(sum, cell[x][y] + dfs(nextx,nexty, cnt + 1));
			visit[nextx][nexty] = false;
		}
	}
	return sum;
}

int middleFinger(int x, int y) {
	int result = 0;
	if (x >= 1 && y >= 1 && y < m - 1)
		result = max(result, cell[x][y - 1] + cell[x][y] + cell[x - 1][y] + cell[x][y + 1]);
	if (x >= 1 && x < n - 1 && y < m - 1)
		result = max(result, cell[x - 1][y] + cell[x][y] + cell[x][y + 1] + cell[x + 1][y]);
	if (x >= 0 && x < n - 1 && y < m - 1)
		result = max(result, cell[x][y - 1] + cell[x][y] + cell[x + 1][y] + cell[x][y + 1]);
	if (x >= 1 && x < n - 1 && y >= 1)
		result = max(result, cell[x - 1][y] + cell[x][y] + cell[x][y - 1] + cell[x + 1][y]);
	return result;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> cell[i][j];
		}
	}
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			visit[i][j] = true;
			result = max(result, dfs(i, j, 1));
			result = max(result, middleFinger(i, j ));
			visit[i][j] = false;
		}
	}
	cout << result << endl;
	return 0;
}