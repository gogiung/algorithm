#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 10000

int r, c;
int answer;
char map[MAX][500];
bool visit[MAX][500];
bool Ans;

int dx[] = { -1,0,1 };
int dy[] = { 1,1,1 };

void dfs(int x, int y) {
	visit[x][y] = true;
	if (y == c - 1) {
		Ans = true;
		answer++;
		return;
	}

	for (int i = 0; i < 3; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx >= 0 && ny >= 0 && nx < r && ny < c) {
			if (map[nx][ny] == '.' && visit[nx][ny] == false) {
				dfs(nx, ny);
				if (Ans == true) {
					return;
				}
			}
		}
	}
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> map[i][j];
		}
	}

	for (int i = 0; i < r; i++) {
		Ans = false;
		dfs(i, 0);
	}

	cout << answer;
}