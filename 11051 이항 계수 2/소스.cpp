#include <iostream>
#include <cstring> 

using namespace std;

const int num = 10007;
const int MAX =1001;

int main()
{
    int n, k;
    cin >> n >> k;
    int dp[MAX][MAX] = {};

    for(int i = 1; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == j || j == 0) {
                dp[i][j] = 1;
                continue;
            }
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % num;
        }
    }
    cout << dp[n][k];

}