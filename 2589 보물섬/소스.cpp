#include <iostream>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0};
int arr[51][51];
int sum[51][51];
int max_num = 0;
bool visit[51][51];

void bfs(int a, int b) {
	visit[a][b] = true;
	queue<pair<int, int>> que;
	que.push({ a,b });

	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (arr[nx][ny] == 1 && !visit[nx][ny]) {
				visit[nx][ny] = true;
				que.push({ nx,ny });
				sum[nx][ny] = sum[x][y] + 1;
				max_num = max(max_num, sum[nx][ny]);
			}
		}
	}
}

int main() {
	cin >> n >> m;
	char temp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> temp;
			if (temp == 'L') arr[i][j] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 1) {
				bfs(i, j);
				memset(visit, false, sizeof(visit));
				memset(sum, false, sizeof(sum));
			}
		}
	}

	cout << max_num;
	return 0;
}