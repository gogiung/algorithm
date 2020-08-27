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
            // 1) �ﰢ�� ���� ���� ���� ���
            if (j == 0) {
                d[i][j] = d[i - 1][j] + triangle[i][j];
                // 2) �ﰢ�� ���� ������ ���� ���
            }
            else if (j == i) {
                d[i][j] = d[i - 1][j - 1] + triangle[i][j];
            }
            // 3) �ﰢ�� ����, ������ ���� �ƴ� ������ ���
            else {
                d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + triangle[i][j];
            }

            // �ִ밪 ����
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