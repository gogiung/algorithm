#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int dp[1001][1001];
string LCS[1001][1001];

int main() {
	string a, b,ans;
	cin >> a >> b;
	int i, j;

	for (i = 1; i <= a.length(); i++) {
		for (j = 1; j <= b.length(); j++) {
			if (a[i - 1] == b[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
				LCS[i][j] = LCS[i][j] + LCS[i - 1][j - 1] + a[i - 1];

			}
			
			else
			{
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

				if (LCS[i - 1][j].length() > LCS[i][j - 1].length())
				{
					LCS[i][j] = LCS[i - 1][j];
				}
				else
				{
					LCS[i][j] = LCS[i][j - 1];
				}


			}
			
		}
	}
	cout << dp[i - 1][j - 1] << endl;
	cout << LCS[i-1][j-1];



}