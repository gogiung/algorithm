#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {

    int answer = 0;



    for (int i = 1; i <= n; i++) {

        int number = 0;

        for (int j = i; j <= n; j++) {

            number += j;

            if (number == n) answer++;
            if (number > n) {
                break;
            }
        }

    }

    return answer;
}

int main() {
    int n = 15;
    int ans = solution(n);
    cout << ans;
}