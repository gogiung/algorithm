#include<iostream>
#include<algorithm>

using namespace std;

int dp[1001][10];

int main() {
	int n;
	cin >> n;
	int sum = 0;

	for (int i = 0; i < 10; i++) {
		dp[1][i] = 1;
	}
	for (int j = 2; j <= n; j++) {
		for (int i = 0; i < 10; i++) {
			for (int k = 0; k <= i; k++) {
				dp[j][i] += dp[j - 1][k];
			}
			dp[j][i] %=10007;
		}
	}
	for (int i = 0; i < 10; i++) {
		sum = (sum + dp[n][i]) % 10007;
	}
	cout << sum % 10007;
}