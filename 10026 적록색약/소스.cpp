#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

char map[100][100];
int visit[100][100];
vector<int> vec;
int n;
int cnt = 0;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x,int y) {
	
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
			continue;
		}
		if (map[nx][ny] == map[x][y] && visit[nx][ny] == 0) {
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j]==0) {
				dfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt<<" ";
	
	memset(visit, 0, sizeof(visit));

	cnt = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 'R') {
				map[i][j] = 'G';
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visit[i][j] == 0) {
				dfs(i, j);
				cnt++;
			}
		}
	}

	cout << cnt;
}