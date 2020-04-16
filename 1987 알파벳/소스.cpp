#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

char map[20][20];
bool check[26] ;
int ans;
int n, m;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y, int z) {
	if (ans < z) {
		ans = z;
	}
	for (int i = 0; i < 4; i++) {
		int nx = dx[i] + x;
		int ny = dy[i] + y;
		if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
			continue;
		}
		int c = map[nx][ny] - 'A';
		if (check[c]) {
			continue;
		}
		check[c] = true;
		dfs(nx, ny, z + 1);
		check[c] = false;
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> map[i];
	}
	check[map[0][0] - 'A'] = true;
	dfs(0, 0, 1);
	cout << ans;
	
}