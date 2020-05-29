#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

const int INF = 987654321;
const int MAX = 100;

typedef struct {
	int y, x;
}Dir;

Dir moveDir[4] = { {1,0},{-1,0},{0,1},{0,-1} };

int n;
int graph[MAX][MAX];
bool visit[MAX][MAX];

void dfs(int y, int x, int cnt) {
	visit[y][x] = true;
	graph[y][x] = cnt;

	for (int i = 0; i < 4; i++) {
		int nexty = y + moveDir[i]. y;
		int nextx = x + moveDir[i]. x;

		if (0 <= nexty && nexty < n && 0 <= nextx && nextx < n) {
			if (graph[nexty][nextx] && !visit[nexty][nextx]) {
				dfs(nexty, nextx, cnt);
			}
		}
	}
}

int bfs(int cnt) {
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (graph[i][j] == cnt) {
				visit[i][j] = true;
				q.push(make_pair(i, j));
			}
		}
	}

	int result = 0;
	while (!q.empty()) {
		int cursize = q.size();

		for (int i = 0; i < cursize; i++) {
			int y = q.front().first;
			int x = q.front().second;
			q.pop();

			for (int i = 0; i<4; i++) {
				int nexty = y + moveDir[i].y;
				int nextx = x + moveDir[i].x;

				if (0 <= nexty && nexty < n && 0 <= nextx && nextx < n) {
					if (graph[nexty][nextx] && graph[nexty][nextx] != cnt) {
						return result;
					}
					else if (!graph[nexty][nextx] && !visit[nexty][nextx]) {
						visit[nexty][nextx] = true;
						q.push(make_pair(nexty, nextx));
					}
				}
			}
		}
		result++;
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> graph[i][j];
		}
	}

	int cnt = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (graph[i][j] && !visit[i][j]) {
				dfs(i, j, cnt++);
			}
		}
	}

	int result = INF;

	for (int i = 1; i < cnt; i++) {
		memset(visit, false, sizeof(visit));
		result =min(result, bfs(i));
	}

	cout << result;
}