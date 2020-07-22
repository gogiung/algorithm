#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(string name) {
    int answer = 0;
    int n = name.length();
    int temp = 0;
    int turn = n - 1;

    for (int i = 0; i < n; i++) {
        int startto = name[i] - 'A';
        int endto = 'Z' - name[i] + 1;

        if (startto > endto) {
            temp += endto;
        }
        else
        {
            temp += startto;
        }

        int next = i + 1;
        while (next < n && name[next] == 'A') {
            next++;
        }
       turn = min(turn, i + n - next + min(i, n - next));
        
    }
    temp += turn;
    answer = temp;

    return answer;
}

int main() {
    string name = "JAN";
    int ans = solution(name);
    cout << ans;
}