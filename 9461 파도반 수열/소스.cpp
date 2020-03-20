#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	long long dp[101];
	
	int n,x;
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 1;
	dp[4] = 2;

	for (int j = 0; j < n; j++) {
		cin >> x;
		for (int i = 4; i <= x; i++) {
			dp[i] = dp[i - 2] + dp[i - 3];
		}

		cout << dp[x] << endl;
	}


}