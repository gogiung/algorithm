#include<iostream>
#include<algorithm>

using namespace std;

int n;

long long dp[101][101];
int map[101][101];

void solution() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (dp[i][j] == 0 || (i == n - 1 && j == n - 1)) {
				continue;
			}

			int value = map[i][j];
			int down = value + i;
			int right = value + j;

			if (down < n) {
				dp[down][j] = dp[down][j] + dp[i][j];
			}
			if (right < n) {
				dp[i][right] = dp[i][right] + dp[i][j];
			}
		}
	}

	cout << dp[n - 1][n - 1];
}


int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}

	dp[0][0] = 1;

	solution();
}