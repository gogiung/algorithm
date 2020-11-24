#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long sum = 0;
    if (a < b) {
        for (int i = a; i <=b ; i++) {
           answer += i;
           
        }
    }
    else if(a>b)
    {
        for (int i = a; i >= b; i--) {

            answer += i;
        }
    }
    else
    {
        answer = a;
    }

    return answer;
}

int main() {
    int a = 3;
    int b = 5;
    long long ans = solution(a, b);
    cout << ans;
}