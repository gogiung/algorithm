#include <iostream>
#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        }
        else
        {
            if (st.empty()) {
                return false;
            }
            else
            {
                st.pop();
            }  
        }  
    }
    if (st.empty()) {
        return true;
    }
    else
    {
        return false;
    }

}

int main() {
    string s = ")()(";
    bool ans = solution(s);
    cout << ans;
}