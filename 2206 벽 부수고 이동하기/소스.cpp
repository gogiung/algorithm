#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, m;
int arr[1001][1001];
bool visit[1001][1001][2] ;
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };

int BFS() {
	queue<pair<pair<int, int>, pair<int, int>>> que;
	que.push({ {0,0},{1,1} });
	visit[0][0][1] = true;

	while (!que.empty())
	{
		int x = que.front().first.first;
		int y = que.front().first.second;
		int wall = que.front().second.first;
		int cnt = que.front().second.second;
		que.pop();

		if (x == n - 1 && y == m - 1) return cnt;
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (arr[nx][ny] == 1 && wall == 1) {
				visit[nx][ny][wall] = true;
				que.push({ {nx,ny},{wall - 1,cnt + 1} });
			}
			if (arr[nx][ny] == 0 && visit[nx][ny][wall]==false) {
				visit[nx][ny][wall] = true;
				que.push({ {nx,ny},{wall,cnt + 1} });
			}
		}
	}
	return -1;
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < m; j++) {
			arr[i][j] = temp[j] - '0';
		}
	}
	cout << BFS();
}