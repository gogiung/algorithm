#include <iostream>
#include <string>
#include <vector>

using namespace std;

//1000000007
int dp[60000];
int solution(int n) {
    int answer = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] % 1000000007 + dp[i - 2] % 1000000007;
    }
    answer = dp[n]% 1000000007;
    return answer;
}



int main() {
    int n = 4;
    int ans = solution(n);
    cout << ans;
}