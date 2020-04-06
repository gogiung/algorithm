#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int m, n;
int map[1001][1001];
int visit[1001];

void dfs(int a) {
	visit[a] = 1;
	for (int i = 1; i <= n; i++) {
		if (map[a][i] == 1 && visit[i] == 0) {
			dfs(i);
		}
	}

	
}

int main() {
	int ans = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		map[u][v] = 1;
		map[v][u] = 1;
	}

	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0) {
			ans++;
			dfs(i);
		}
	}
		
	cout << ans;
}