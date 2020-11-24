#include <iostream>
#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int r = 0;
    int l = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            r++;
        }
        if (s[i] == 'y' || s[i] == 'Y') {
            l++;
        }
    }
    
    if (r == l) {
        return true;
    }
    else
    {
        return false;
    }

}

int main() {
    string s = "pPy";
    bool ans = solution(s);
    cout << ans;
}