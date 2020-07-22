#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long dp[80];
long long  width[80];

long long solution(int N) {
    long long answer = 0;
    dp[1] = 1;
    width[1] = 4;
    dp[2] = 1;
    width[2] = 6;
    dp[3] = 2;
    width[3] = 10;
    dp[4] = 3;
    width[4] = 16;
    dp[5] = 5;
    width[5] = 26;
    for (int i = 5; i <= N; i++) {
        dp[i] = dp[i - 1]+dp[i - 2];
        width[i] = width[i - 1] + dp[i] * 2;
    }
    answer = width[N];
    
    return answer;

}

int main() {
    int N = 6;
    long long ans = solution(N);
    cout << ans;
}