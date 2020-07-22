#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> board) { //���� ū ���簢�� - success
    int answer = board[0][0];

    for (int i = 1; i < board.size(); i++) {
        for (int j = 1; j < board[0].size(); j++) {
            //0�� ��쿡�� ���簢���� ��������� �����Ƿ� 1�� ��츸 ���
            if (board[i][j] == 1) {
                //������, ������, ���� �밢���� �ִ� �� �� ����
                board[i][j] = min(board[i][j - 1], board[i - 1][j]);
                board[i][j] = min(board[i - 1][j - 1], board[i][j]) + 1;
                answer = max(answer, board[i][j]);
            }
        }
    }

    //������ �Ʒ����� ���� ���̸� ����Ǿ� �ֱ� ������ ���� ����
    return answer * answer;
}


int main() {
    vector<vector<int>> board = { {0,0,1,1},{1,1,1,1} };
    int ans = solution(board);

    cout << ans;
}