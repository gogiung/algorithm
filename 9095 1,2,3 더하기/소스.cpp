#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
    int n, testCase;
    cin >> testCase;

    for (int t = 0; t < testCase; t++) {
        cin >> n;

        int dp[11] = { 0 };
        dp[1] = 1, dp[2] = 2, dp[3] = 4;

        for (int i = 4; i <= n; i++) {
            dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
        }
        cout << dp[n] << endl;
    }
    return 0;
}
