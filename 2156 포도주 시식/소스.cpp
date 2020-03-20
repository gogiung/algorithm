#include<iostream>
#include<algorithm>

using namespace std;

int max(int a, int b, int c) {
	return a > b ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int main() {

	int p[10001] = {}; // podo
	int dp[10001] = {}; // drink
	int n; cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> p[i];
	}
	dp[0] = 0;
	dp[1] = p[1];
	dp[2] = p[1] + p[2];
	for (int i = 3; i <= n; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + p[i], dp[i - 3] + p[i - 1] + p[i]);
	}

	cout << dp[n] << "\n";

}
