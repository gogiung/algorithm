#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dp[100000];
int solution(int n, vector<int> money) {
	dp[0] = 1;

	sort(money.begin(), money.end());
	for (auto m : money) {
		for (int i = 1; i <= n; i++) {
			if (i - m < 0) {
				continue;
			}
			dp[i] = (dp[i] + dp[i - m]) % 1000000007;
		}
	}

	return dp[n] %1000000007;
}


int main() {
    int n = 5;
    vector<int> money = { 1,2,5 };
    int ans = solution(n, money);
    cout << ans;
}