#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
bool chk(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    vector<int> v;
    for (int i = 0; i < numbers.size(); i++) {
        v.push_back(numbers[i] - '0');
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    // ��� ����� �� ã��
    do {
        for (int i = 0; i <= v.size(); i++) {
            int tmp = 0;
            for (int j = 0; j < i; j++) {
                tmp = (tmp * 10) + v[j];
                ans.push_back(tmp);
            }
        }
    } while (next_permutation(v.begin(), v.end()));
    // �ߺ��� vector�� ����
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    // �Ҽ� ã��
    for (int i = 0; i < ans.size(); i++) {
        if (chk(ans[i])) answer += 1;
    }
    return answer;
}


int main() {
    string numbers = "17";
    int ans = solution(numbers);
    cout << ans;
}