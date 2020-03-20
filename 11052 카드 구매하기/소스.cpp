#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int p[10001] = {};
	int dp[1001] = {};

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}

	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			dp[i] = max(dp[i], p[j] + dp[i - j]);
		}
	}
	cout << dp[n];

}