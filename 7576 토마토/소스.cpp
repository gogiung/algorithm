#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int n, m, h, w;
int d[1000][1000];
int a[1000][1000];
int dh[4] = { 0,0,-1,1 };
int dw[4] = { -1,1,0,0 };
int ans, cnt;

queue<pair<int, int>> q;

int main() {
	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			d[i][j] = -1;
			if (a[i][j] == 1) {
				q.push(make_pair(i, j));
				d[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 1) {
				cnt++;
			}
			if (cnt == n * m) {
				cout << "0";
				return 0;
			}
		}
	}

	while (!q.empty()) {
		h = q.front().first;
		w = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nh = h + dh[i];
			int nw = w + dw[i];
			if (0 <= nh && nh < n && 0 <= nw && nw < m) {
				if (a[nh][nw] == 0 && d[nh][nw] == -1) {
					q.push(make_pair(nh, nw));
					d[nh][nw] = d[h][w] + 1;
					ans = d[nh][nw];
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] == 0 && d[i][j] == -1) {
				cout << "-1";
				return 0;
			}
		}
	}

	cout<<ans<<"\n";


}