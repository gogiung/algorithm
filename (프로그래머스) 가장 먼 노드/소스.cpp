#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

vector<int> v[20001];
int visit[20001];

int BFS(int n) {
    memset(visit, -1, sizeof(visit));
    int Max = 0;
    queue<pair<int, int>> Q;
    Q.push(make_pair(1, 0));
    visit[1] = 0;
    while (!Q.empty())
    {
        int Cur = Q.front().first;
        int Dist = Q.front().second;
        Q.pop();

        for (int i = 0; i < v[Cur].size(); i++) {
            int next = v[Cur][i];
            if (visit[next] == -1) {
                visit[next] = Dist + 1;
                Q.push(make_pair(next, Dist + 1));
                if (Max < Dist + 1) {
                    Max = Dist + 1;
                }
            }
        }
    }
    return Max;
}

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    for (int i = 0; i < edge.size(); i++) {
        int A = edge[i][0];
        int B = edge[i][1];
        v[A].push_back(B);
        v[B].push_back(A);
    }
    int dist = BFS(n);
    for (int i = 2; i <= n; i++) {
        if (visit[i] == dist) {
            answer++;
        }
    }
    return answer;
}

int main() {
    int n = 6;
    vector<vector<int>> edge = { {3, 6},{4, 3},{3, 2},{1, 3},{1, 2},{2, 4},{5, 2} };

    int ans = solution(n, edge);
    cout << ans;
}