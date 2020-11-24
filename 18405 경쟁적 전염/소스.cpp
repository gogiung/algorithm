#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <tuple>
using namespace std;

#define Max 202

int n, k, m[Max][Max];
int dy[4] = { 0, 1, 0, -1 };
int dx[4] = { 1, 0, -1, 0 };
vector<pair<int, int> > v[Max * 5];
bool visit[Max][Max];

void bfs(int s, int ey, int ex)
{
    queue<tuple<int, int, int> > q;

    for (int i = 1; i <= k; i++) {
        if (!v[i].empty()) {
            for (auto p : v[i]) {
                q.push({ i, p.first, p.second });
                visit[p.first][p.second] = true;
            }
        }
    }

    while (!q.empty() && s--)
    {
        int qs = q.size();

        while (qs--)
        {
            int num, r, c;
            tie(num, r, c) = q.front();

            q.pop();

            for (int i = 0; i < 4; i++) {
                int y = r + dy[i];
                int x = c + dx[i];

                if (y < 0 || y >= n || x < 0 || x >= n || visit[y][x]) {
                    continue;
                }

                m[y][x] = num;
                visit[y][x] = true;
                q.push({ num, y, x });
            }
        }
    }

    cout<<m[ey][ex];
}

int main()
{

    scanf_s("%d %d", &n, &k);

    int idx = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf_s("%d", &m[i][j]);

            if (m[i][j]) {
                v[m[i][j]].push_back({ i, j });
            }
        }
    }

    int s, y, x;

    scanf_s("%d %d %d", &s, &y, &x);

    bfs(s, y - 1, x - 1);

    return 0;
}
