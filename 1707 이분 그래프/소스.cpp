#include<iostream>
#include<algorithm>
#include<vector>
#include <cstring>

using namespace std;

const int MAX = 20001;

int k, v, e;
vector<int> graph[MAX];
int nodeColor[MAX];

void dfs(int nodeNum, int color) {
	nodeColor[nodeNum] = color;

	for (int i = 0; i < graph[nodeNum].size(); i++) {
		int next = graph[nodeNum][i];
		if (!nodeColor[next]) {
			dfs(next, 3 - color);
		}
	}
}

bool isBipartiteGraph() {
	for (int i = 1; i <= v; i++) {

		for (int j = 0; j < graph[i].size(); j++) {
			int next = graph[i][j];
			if (nodeColor[i] == nodeColor[next]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	cin >> k;

	for (int i = 0; i < k; i++) {
		for (int j = 1; j < MAX; j++) {
			graph[j].clear();
		}
		memset(nodeColor, 0, sizeof(nodeColor));

		cin >> v >> e;

		for (int j = 0; j < e; j++) {
			int node1, node2;

			cin >> node1 >> node2;

			graph[node1].push_back(node2);
			graph[node2].push_back(node1);
		}

		for (int j = 1; j <= v; j++) {
			if (nodeColor[j] == 0) {
				dfs(j, 1);
			}
		}
		if (isBipartiteGraph()) {
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}