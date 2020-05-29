#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[502][502];
int arr[502];
int sum[502];

int main() {
	int t;
	cin >> t;

	while (t--) {
		memset(dp, 0, sizeof(dp));
		memset(arr, 0, sizeof(arr));

		int n;
		cin >> n;

		for (int i = 1; i <= n; i++) {
			cin >> arr[i];
			sum[i] = sum[i - 1] + arr[i];
		}

		for (int i = 2; i <= n; i++) {
			for (int j = i - 1; j > 0; j--) {
				dp[j][i] = 987654321;
				for (int k = j; k <= i; k++) {
					dp[j][i] = min(dp[j][i], dp[j][k] + dp[k + 1][i]);
				}

				dp[j][i] += sum[i] - sum[j - 1];
			}
		}

		cout << dp[1][n] << endl;

	}
}