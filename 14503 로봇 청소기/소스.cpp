#include<iostream>
#include<algorithm>

using namespace std;

#define MAX 51

int n, m;
int map[MAX][MAX];
int x, y;
int result;
int dir;

int main() {
	cin >> n >> m;
	cin >> x >> y >> dir;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
		}
	}

	while (1)
	{
		int dx[] = { -1,0,1,0 };
		int dy[] = { 0,1,0,-1 };
		if (map[x][y] == 0) {
			map[x][y] = 2;
			result++;
		}

		int check = 0;
		for (int i = 0; i < 4; i++) {
			dir = dir - 1;
			if (dir < 0) {
				dir = 3;
			}

			int nx = x + dx[dir];
			int ny = y + dy[dir];

			if (map[nx][ny] == 0) {
				x = nx;
				y = ny;
				check = 1;
				break;
			}
		}

		if (check == 1) {
			continue;
		}

		int temp_dir = dir - 2;
		if (temp_dir == -2) {
			temp_dir = 2;
		}
		if (temp_dir == -1) {
			temp_dir = 3;
		}

		x = x + dx[temp_dir];
		y = y + dy[temp_dir];

		if (map[x][y] == 1) {
			break;
		}
	}
	cout << result;

}