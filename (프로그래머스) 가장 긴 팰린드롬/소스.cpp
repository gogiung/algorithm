#include <iostream>
#include <string>
using namespace std;
int solution(string s)
{
    int len = s.size();

    while (len >= 2) { // 검사해보려는 문자열의 길이. 6,5,4..2
        for (int i = 0; i <= s.size() - len; i++) {  // left와 right를 오른쪽으로 한칸씩 이동. 0,3 -> 1,4 -> 2,5 ...
            int left = i;
            int right = len + i - 1;
            bool flag = true;
            while (left < right) {  // 실제로 펠린드롬인지 확인
                if (s[left] != s[right]) {
                    flag = false;
                    break;
                }
                left++;
                right--;
            }
            if (flag) {
                return len;
            }
        }
        len--;
    }
    return 1;
}


int main() {
    string s = "acdc";
    int ans = solution(s);
    cout << ans;
}