#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(string arrangement) {
    int answer = 0;
    stack<int> num;

    for (int i = 0; i < arrangement.size(); i++) {
        if (arrangement[i] == '(') {
            num.push(1);
        }
        else
        {
            num.pop();
            if (arrangement[i - 1] == '(') {
                answer += num.size();
            }
            else
            {
                answer++;
            }
        }
    }
    return answer;
}

int main() {
    string arrangement =  "(((())))" ;
    int ans = solution(arrangement);
    cout << ans;
}