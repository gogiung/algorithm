#include <iostream>
#include<string>
#include <stack>
using namespace std;

int solution(string s)
{
    stack<char> a;
    for (char i : s) {
        if (a.empty() || a.top() != i) {
            a.push(i);
        }
        else
        {
            a.pop();
        }
    }


    if (a.empty()) {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int main() {
    string s = "baabaa";

    int ans = solution(s);
    cout << ans;

}