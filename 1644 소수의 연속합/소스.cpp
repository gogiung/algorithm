#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> prime;
vector<bool>check;

int main() {
    int n;
    

    cin >> n;

    check.resize(n + 1, true);
    for (int i = 2; i * i <= n; i++) {
        if (!check[i]) continue;
        for (int j = i * i; j <= n; j += i) {
            check[j] = false;
        }
    }

    for (int i = 2; i <= n; i++) {
        if (check[i]) {
            prime.push_back(i);
        }
    }

    int cnt = 0; int sum = 0;
    int ptr = 0;
    for (int i = 0; i < prime.size(); i++)
    {
        sum += prime[i];

        while (sum > n)
            sum -= prime[ptr++];

        cnt += (sum == n);
    }

    cout << cnt;

}
    