#include<iostream>
#include<algorithm>

using namespace std;

int dp[10001] = { 1 };
int coin[101];

int main() {
	int n, k;
	cin>> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> coin[i];

		for (int j = coin[i]; j <= k; j++) {
			dp[j] += dp[j - coin[i]];
		}
	}

	cout << dp[k];

}