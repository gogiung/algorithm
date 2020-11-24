#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int plusx[4] = { 1, -1,0,0 };
int plusy[4] = { 0,0,1,-1 };
int map[8][8];
int visit[8][8];
vector<pair<int, int>> v;
int n, m;

void dfs(int x,int y) {
	for (int i = 0; i < 4; i++) {
		int newx = x + plusx[i];
		int newy = y + plusy[i];
		if (newx >= 0 && newx < n && newy >= 0 && newy < m) {
			if (visit[newx][newy] == 0) {
				visit[newx][newy] = 2;
				dfs(newx, newy);
			}
		}
	}
}

int main() {
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			visit[i][j] = map[i][j];
			if (map[i][j] == 0) {
				v.push_back(make_pair(i, j));
			}
		}
	}
	int Max = 0;
	for (int i = 0; i < v.size() - 2; i++) {
		for (int j = i + 1; j < v.size() - 1; j++) {
			for (int k = j + 1; k < v.size(); k++) {
				pair<int, int> one = v[i];
				pair<int, int> two = v[j];
				pair<int, int> three = v[k];

				for (int i = 0; i < n; i++) {
					for (int j = 0; j < m; j++) {
						visit[i][j] = map[i][j];
					}
				}

				visit[one.first][one.second] = 1;
				visit[two.first][two.second] = 1;
				visit[three.first][three.second] = 1;

				for (int i = 0; i < n; i++) {
					for (int j = 0; j < m; j++) {
						if (visit[i][j] == 2) {
							dfs(i, j);
						}
					}
				}
					int cnt = 0;
					for (int i = 0; i < n; i++) {
						for (int j = 0; j < m; j++) {
							if (visit[i][j] == 0) {
								cnt++;
							}
						}
					}

					Max = max(Max, cnt);
				}
		}
	}
	cout << Max;

}