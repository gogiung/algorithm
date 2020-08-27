#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int answer, height, d[500][500];

int solution(vector<vector<int>> triangle) {
    answer = d[0][0] = triangle[0][0];
    

    for (int i = 1; i < triangle.size(); i++) {
        for (int j = 0; j <= i; j++) {
            // 1) 삼각형 제일 왼쪽 끝인 경우
            if (j == 0) {
                d[i][j] = d[i - 1][j] + triangle[i][j];
                // 2) 삼각형 제일 오른쪽 끝인 경우
            }
            else if (j == i) {
                d[i][j] = d[i - 1][j - 1] + triangle[i][j];
            }
            // 3) 삼각형 왼쪽, 오른쪽 끝인 아닌 내부인 경우
            else {
                d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + triangle[i][j];
            }

            // 최대값 갱신
            answer = max(answer, d[i][j]);
        }
    }

    return answer;
}


int main() {
    vector<vector<int>> triangle = { {7} ,{3, 8},{8, 1, 0},{2, 7, 4, 4},{4, 5, 2, 6, 5} };
    int ans = solution(triangle);

    cout << ans;
}