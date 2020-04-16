#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int dp[1001][1001];

int main() {
	string a, b;
	cin >> a>> b;
	int i, j;

	for (i = 1; i <= b.length(); i++) {
		for (j = 1; j <= a.length(); j++) {
			if (b.at(i-1) == a.at(j-1)) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
			{
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			}

		 }
		}
	cout << dp[i-1][j-1];

	
	
}