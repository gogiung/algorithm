#include<iostream>
#include<algorithm>

using namespace std;

int adj[101][101];
int visit[101][101];
int n;

void dfs(int a, int b) {
	visit[a][b] = 1;
	for (int i = 0; i < n; i++) {
		if (adj[b][i] == 1 && visit[a][i] == 0) {
			dfs(a, i);
		}
	}
}


int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> adj[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (adj[i][j] == 1) {
				dfs(i, j);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << visit[i][j] << " ";
		}
		cout << endl;
	}
}