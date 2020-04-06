#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, m, start;
const int MAX = 1001;
int a[MAX][MAX];
int visit[MAX];

void dfs(int start) {
	cout << start << " ";
	visit[start] = 1;
	for (int i = 1; i <= n; i++) {
		if (visit[i] == 0 && a[start][i] == 1) {
			dfs(i);
		}
		
	}
}

void bfs(int start) {
	queue<int> q;
	q.push(start); 
	visit[start] = 0;

	while (!q.empty())
	{
		start = q.front();
		cout << q.front() << " ";
		q.pop();
		for (int i = 1; i <= n; i++) {
			if (a[start][i] == 0 || visit[i] == 0) {
				continue;
			}
			q.push(i);
			visit[i] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin >> n >> m >> start;
	int x, y;
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		a[x][y] = a[y][x] = 1;
	}
	dfs(start);
	cout << endl;
	bfs(start);
	cout << endl;

}