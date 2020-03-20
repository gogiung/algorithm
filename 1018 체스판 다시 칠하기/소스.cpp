#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

const int INF = 1000000;
const int MAX = 50;

int n, m;
string board[MAX];

string whiteFirst[8] = {
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" }
};

string blackFirst[8] = {

        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" },
        { "BWBWBWBW" },
        { "WBWBWBWB" }
};

int whiteFirstChange(int x, int y) {
    int cnt = 0;
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if (board[i][j] != whiteFirst[i - x][j - y]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int blackFisrtChange(int x, int y) {
    int cnt = 0;
    for (int i = x; i < x + 8; i++) {
        for (int j = y; j < y + 8; j++) {
            if (board[i][j] != blackFirst[i - x][j - y]) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> board[i];
    }
    int result = INF;
    for (int i = 0; i + 7 < n; i++) {
        for (int j = 0; j + 7 < m; j++) {
            result = min(result, min(whiteFirstChange(i, j), blackFisrtChange(i, j)));
        }
    }
    cout << result << endl;
    return 0;
}