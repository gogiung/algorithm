#include<iostream>
#include<algorithm>

using namespace std;

int st[3][100001];
int dp[3][100001];

int main() {
	int t;
	int n;

	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n;
		for (int i = 1; i <= n; i++) {
			cin >> st[1][i];
		}
		for (int i = 1; i <= n; i++) {
			cin >> st[2][i];
		}

		dp[1][1] = st[1][1];
		dp[2][1] = st[2][1];
		dp[1][2] = st[1][2] + dp[2][1];
		dp[2][2] = st[2][2] + dp[1][1];

		for (int i = 3; i <= n; i++) {
			dp[1][i] = st[1][i] + max(dp[2][i - 1], dp[2][i - 2]);
			dp[2][i] = st[2][i] + max(dp[1][i - 1], dp[1][i - 2]);
		}
		cout << max(dp[1][n], dp[2][n]) << endl;
	}
}