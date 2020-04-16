#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int map[101][101];
int visit[101][101];

int m, n, k;
int x, y, z, w;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

int cnt = 0;
vector<int> v;



void dfs(int x, int y) {
	cnt++;
	visit[x][y] = 1;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= m || ny < 0 || ny >= n) {
			continue;
		}
		if (map[nx][ny] == 0 && visit[nx][ny] == 0) {
			
			dfs(nx, ny);
		}
	}
}

int main() {
	cin >> m >> n >> k;


	for (int n = 0; n < k; n++) {
		cin >> x >> y >> z >> w;
		
		for (int i = y; i < w; i++) {
			for (int j = x; j <z; j++) {
				map[i][j] =1;
			}
		}

	}

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 0 && visit[i][j] == 0 ) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}

	cout << v.size() << endl;

	sort(v.begin(), v.end());


	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	
}