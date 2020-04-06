#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<string.h>

using namespace std;

int visit[51][51];
int arr[51][51];
int vi[4] = { 0,0,-1,1 };
int vj[4] = { -1,1,0,0 };
int n, m, k;
int cnt;

vector<int> vec;

void dfs(int x, int y) {
	for (int i = 0; i < 4; i++) {
		int ni = x + vi[i];
		int nj = y + vj[i];

		if (ni < 0 || ni >= n || nj < 0 || nj >= m) {
			continue;
		}
		if (arr[ni][nj] == 1 && visit[ni][nj] == 0) {
			visit[ni][nj] = 1;
			dfs(ni, nj);
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,x,y;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n >> m >> k;

		memset(arr, 0, sizeof(arr));
		memset(visit, 0, sizeof(visit));

		int ans = 0;

		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			arr[x][y] = 1;
		}
		
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == 1 && visit[i][j] == 0) {
					ans++;
					visit[i][j]++;
					dfs(i, j);
				}
			}
		}
		cout << ans << "\n";

	}
	
}
