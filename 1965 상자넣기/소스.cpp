#include<iostream>
#include<algorithm>

using namespace std;

int dp[1000];
int list[1000];
int n;
int cnt = 0;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
		dp[i] = 1;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (list[j] < list[i] && dp[i] < dp[j]+ 1) {
				dp[i] = dp[j] + 1;
			}
		}
		cnt = max(cnt, dp[i]);
	}

	cout << cnt;
}