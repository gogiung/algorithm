#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string s) {
    int answer = 0;
    int count = 1;
    string temp, result;
    vector<int> v;
    for (int i = 1; i <= s.length() / 2; i++) {
        result = "";
        for (int j = 0; j < s.length(); j += i) {
            temp = s.substr(j, i);
            if (j + i > s.length() || temp != s.substr(j + i, i)) {
                if (count != 1)
                    result += to_string(count);
                result += temp;
                count = 1;
            }
            else
                count++;
        }
        v.push_back(result.length());
    }
    if (s.length() == 1) answer = 1;
    else answer = *min_element(v.begin(), v.end());

    return answer;
}

int main() {
    string s="ababcdcdababcdcd";
    int ans = solution(s);
    cout << ans;
}