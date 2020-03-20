#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int  ans = 0, n, m;
	char a[50][50], b[50][50];
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = 0; j < m - 2; j++) {
			if (a[i][j] == b[i][j]) {
				continue;
			}
			ans++;
			for (int x = i; x < i + 3; x++) {
				for (int y = j; y < j + 3; y++) {

					if (a[x][y] == '0') {
						a[x][y] = '1';
					}
					else {
						a[x][y] = '0';
					}
				}
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != b[i][j]) {
				cout << "-1" << endl; return 0;
			}
		}
	}
	cout << ans;

}