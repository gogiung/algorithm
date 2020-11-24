#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    string a = "¼ö";
    string b = "¹Ú";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            answer += b;
        }
        else
        {
            answer += a;
        }
    }
    return answer;
}

int main() {
    int n = 5;
    string ans = solution(n);
    cout << ans;
}