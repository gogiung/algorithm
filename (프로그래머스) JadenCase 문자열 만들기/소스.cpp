#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    for (int i = 0; i < s.size(); i++) {
        if(i==0){
            answer += toupper(s[i]);
        }
        else if (s[i] ==' ') {
            answer += " ";
        }
        else if(s[i-1]==' ')
        {
            answer += toupper(s[i]);
        }
        else
        {
            answer += tolower(s[i]);
        }
        

    }
    return answer;
}

int main() {
    string s = "3people unFollowed me";
    string ans = solution(s);
    cout << ans;
}