#include<iostream>
#include<algorithm>
#include<vector>
#include <cstring>

using namespace std;

const int MAX = 20001;

int n, x, y;
int color[MAX];
vector<int> node[MAX];

void dfs(int nodenum, int nodecolor) {
	color[nodenum] = nodecolor;
	for (int i = 0; i < node[nodenum].size(); i++) {
		int next = node[nodenum][i];
		if (color[next]==0) {
			dfs(next, 3 - nodecolor);
		}
	}

}

bool possible() {
	for (int i = 1; i <= x; i++) {
		for (int j = 0; j < node[i].size(); j++) {
			int next = node[i][j];
			if (color[i] == color[next]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < MAX; j++) {
			node[j].clear();
		}
		memset(color, 0, sizeof(color));
		cin >> x >> y;
		for (int j = 0; j < y; j++) {
			int u, v;
			cin >> u >> v;
			node[u].push_back(v);
			node[v].push_back(u);
		}

		for (int j = 1; j <= x; j++) {
			if (color[j] == 0) {
				dfs(j, 1);
			}
		}

		if (possible()) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
	}
	
}