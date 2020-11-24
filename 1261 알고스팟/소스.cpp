#include <iostream>
#include <queue>

using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };
int n, m;
string input[100];
bool visit[100][100];

int BFS() {
	priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
	pq.push({ 0,{0,0} });
	visit[0][0] = true;

	while (!pq.empty())
	{
		int x = pq.top().second.first;
		int y = pq.top().second.second;
		int block = pq.top().first;
		pq.pop();

		if (x == n - 1 && y == m - 1) return block;

		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];

			if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
				if (!visit[nx][ny]) {
					if (input[nx][ny] == '1') {
						pq.push({ block + 1,{nx,ny} });
					}
					else
					{
						pq.push({ block,{nx,ny} });
					}
					visit[nx][ny] = true;
				}
			}
		}
	}
}

int main() {
	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	cout << BFS();
}