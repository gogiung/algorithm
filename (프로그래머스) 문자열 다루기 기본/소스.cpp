#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;

    if (s.size() == 4 || s.size() == 6) {
        for (int i = 0; i < s.size(); i++) {

            if (s[i] >= 'A') {
                return false;
            }
      
        }
        return true;

    }
    else
    {
        return false;
    }
    
    return answer;
}

int main() {
    string s = "a234";
    bool ans = solution(s);
    cout << ans;
}