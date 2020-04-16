#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a[1001][1001];
int dp[1001][1001];
int main() {
	int n, m;
	cin >> n >> m;

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			sum = max(max(dp[i - 1][j], dp[i][j - 1]),dp[i-1][j-1]);
			dp[i][j] = sum + a[i][j];
		}
	}
	cout << dp[n][m];
}