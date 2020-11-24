#include<iostream>
#include<algorithm>

using namespace std;

int n;
int t[16];
int p[16];
int dp[16];
int result;


int main() {
	
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> t[i] >> p[i];
	}

	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j < i; j++) {
			dp[i] = max(dp[i], dp[j]);

			if (j + t[j] == i) {
				dp[i] = max(dp[i], dp[j] + p[j]);
			}
		}
		result = max(result, dp[i]);
	}
	cout << result;

}