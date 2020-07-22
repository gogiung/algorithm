#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
using namespace std;


int M, N;
vector<vector<int>> P ;
int visit[100][100] = {};
int color_cnt = 0;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0 };


void dfs(int x, int y) {

    color_cnt++;
    visit[x][y] = 1;


    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= M || ny < 0 || ny >= N) {
            continue;
        }
        if (P[x][y] == P[nx][ny] && visit[nx][ny] == 0) {
            dfs(nx, ny);
        }
    }



}

vector<int> solution(int m, int n, vector<vector<int>> picture) {
    vector<int>vec;

    P = picture;

    M = m;
    N = n;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            visit[i][j] =0;
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (picture[i][j] != 0 && visit[i][j] == 0) {
                color_cnt = 0;
                dfs(i, j);
                vec.push_back(color_cnt);
            }
        }
    }
    vector<int> answer(2);
    sort(vec.begin(), vec.end(), greater<int>());

    answer[0] = vec.size();
    answer[1] = vec[0];


    return answer;
}

int main() {
    int m = 6, n = 4;
    vector<vector<int>> picture = { {1, 1, 1, 0} ,{1, 2, 2, 0},{1, 0, 0, 1},{0, 0, 0, 1},{0, 0, 0, 3},{0, 0, 0, 3} };

    vector<int> ans = solution(m, n, picture);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<" ";
    }
    
}