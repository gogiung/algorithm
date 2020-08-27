#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int solution(string s)
{
    int answer = 0;
    int length = s.length();

    for (int i = 0; i < length; i++) {
        for (int subLength = length; subLength > answer; subLength--) {
            int left = i;
            int right = left + subLength - 1;
            while (left < right && s[left] == s[right]) {
                left++;
                right--;
            }
            if (left >= right && answer < subLength) {
                answer = subLength;
                break;
            }
        }
    }

    return answer;
}


int main() {
    string s = "acdc";
    int ans = solution(s);
    cout << ans;
}