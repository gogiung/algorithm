#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, long long k) {
    vector<int> answer;

    for (int i = 1; i <=n; i++) {
        answer.push_back(i);
    }
    int cnt = 0;
    do {
        cnt++;
       
        if (cnt == k) {
            break;
        }
       

    } while (next_permutation(answer.begin(), answer.end()));

    return answer;
}

int main() {
    int n = 3;
    long long k = 5;
    vector<int> ans = solution(n, k);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}