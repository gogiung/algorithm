#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<map>

using namespace std;



int main() {

	int x, i;
	cin >> x;
	int dp[1000001] = {};

	for (i = 2; i <= x; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	cout << dp[x];
}

