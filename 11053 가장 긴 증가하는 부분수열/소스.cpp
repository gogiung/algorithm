#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int dp[1001] = {};
	int list[1001] = {};
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> list[i];
	}
	int cnt = 0;

	for (int i = 1; i <= n; i++) {
		dp[i] = 1;
		for (int j = 1; j <= i; j++) {
			if (list[i] > list[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		cnt = max(cnt, dp[i]);
	}
	cout << cnt;


}