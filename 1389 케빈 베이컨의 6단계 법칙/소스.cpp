#include<iostream>
#include<algorithm>

using namespace std;

const int INF = 987654321;
const int MAX = 101;

int n, m;
int graph[MAX][MAX];

void floyd() {
	//거처가는 노드k
	for (int k = 1; k <= n; k++) {
		//출발노드 i
		for (int i = 1; i <= n; i++) {
			//도착노드 j
			for (int j = 1; j <= n; j++) {
				if (i == j) {
					continue;
				}
				else if (graph[i][k] && graph[k][j]) {
					if (graph[i][j] == 0) {
						graph[i][j] = graph[i][k] + graph[k][j];
					}
					else
					{
						graph[i][j] = min(graph[i][k] + graph[k][j], graph[i][j]);
					}
				}
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int node1, node2;
		cin >> node1 >> node2;

		graph[node1][node2] = graph[node2][node1] = 1;
	}

	floyd();

	int result = INF;
	int person;
	for (int i = 1; i <= n; i++) {
		int sum = 0;
		for (int j = 1; j <= n; j++) {
			sum += graph[i][j];
		}
		if (result > sum) {
			result = sum;
			person = i;
		}
	}
	cout << person;
}