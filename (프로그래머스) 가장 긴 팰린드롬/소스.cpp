#include <iostream>
#include <string>
using namespace std;
int solution(string s)
{
    int len = s.size();

    while (len >= 2) { // �˻��غ����� ���ڿ��� ����. 6,5,4..2
        for (int i = 0; i <= s.size() - len; i++) {  // left�� right�� ���������� ��ĭ�� �̵�. 0,3 -> 1,4 -> 2,5 ...
            int left = i;
            int right = len + i - 1;
            bool flag = true;
            while (left < right) {  // ������ �縰������� Ȯ��
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