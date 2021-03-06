#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> baseball) {
    int answer = 0;
    int strike = 0;
    int ball = 0;
    int flag = true;
    string num1 = "";
    string num2 = "";

    for (int i = 123; i <= 987; i++) {
        num1 = to_string(i);
        if (num1[0] == num1[1] || num1[0] == num1[2] || num1[1] == num1[2])
            continue;
        else if (num1[0] == '0' || num1[1] == '0' || num1[2] == '0')
            continue;
        flag = true;
        for (int j = 0; j < baseball.size(); j++) {
            strike = 0;
            ball = 0;
            for (int a = 0; a < 3; a++) {
                for (int b = 0; b < 3; b++) {
                    num2 = to_string(baseball[j][0]);
                    if (a == b && num1[a] == num2[b])
                    {
                        strike++;
                        continue;
                    }
                    if (a != b && num1[a] == num2[b]) {
                        ball++;
                        continue;
                    }
                }
            }

            if (strike != baseball[j][1] || ball != baseball[j][2]) {
                flag = false;
                break;
            }
        }
        if (flag == true) {
            answer++;
        }


    }

    return answer;
}

int main() {
    vector<vector<int>> baseball = { {123, 1, 1},{356, 1, 0},{327, 2, 0},{489, 0, 1} };
    int ans = solution(baseball);
    cout << ans;
}