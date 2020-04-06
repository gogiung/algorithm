#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int d[15][15];

int main() {
	for (int i = 1; i < 15; i++) {
		d[0][i] = i;
	}
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			d[i][j] = d[i - 1][j] + d[i][j - 1];
		}
	}

	int t, k, n;
	cin >> t;
	while (t--) {
		cin >> k>> n;
		cout << d[k][n] << endl;
	}
	
}