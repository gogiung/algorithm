#include<iostream>

using namespace std;

int a[301][301];

int main() {
	int n, m,k;
	cin >> n >> m;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	cin >> k;

	while (k--) {
		int q,w, sum=0, x, y;

		cin >> q >> w >> x >> y;

		for (int i = q; i <= x; i++) {
			for (int j = w; j <= y;j++) {
				sum += a[i][j];
			}
		}
		cout << sum << "\n";
	}
}