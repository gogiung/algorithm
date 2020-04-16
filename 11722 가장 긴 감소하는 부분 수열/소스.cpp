#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int list[1001] = {};
	int dp[1001] = {};
	int n;
	cin >> n;

	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}
	
	for (int i = 0; i<n; i++) {
		cnt = 0;
		for (int j = 0; j < i; j++) {
			if (list[j] > list[i]) {
				cnt = max(cnt, dp[j]);
			}
		}
		dp[i] = cnt + 1;
		if (dp[i] > ans) {
			ans = dp[i];
		}
	}
	cout << ans;
}