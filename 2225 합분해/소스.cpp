#include <iostream>
#define mod 1000000000
using namespace std;

int dp[201][201];

int main()
{
    int i = 0, j = 0, n, k;
    cin >> n;
    cin >> k;

    for (i = 1; i <= n; i++) {
        dp[i][1] = 1;
    }

    for (i = 1; i <= k; i++) {
        dp[1][i] = i;
    }

    for (i = 2; i <= n; i++) {
        for (j = 2; j <= k; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
        }
    }

    cout << dp[n][k];
}