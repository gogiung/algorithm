#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

bool dp[101];
int t;
int n;


int main() {
	cin >> t;
	while (t--)
	{
		memset(dp, 0, sizeof(dp));
		cin >> n;
		for (int i = 1; i <= n; i++) {
			for (int j = i; j <= n; j = j + i) {
				if (dp[j]) {
					dp[j] = false;
				}
				else
				{
					dp[j] = true;
				}
			}
		}

		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (dp[i]) {
				cnt++;
			}
		}
		cout << cnt << "\n";

	}
}
