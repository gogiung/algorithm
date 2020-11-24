#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

const int MAX = 50;

int vi[4] = { 0,0,-1,1 };
int vj[4] = { -1,1,0,0 };

int N, L, R;
int people, num;
int graph[MAX][MAX];
bool visited[MAX][MAX];

vector<pair<int, int>> v;


void DFS(int x, int y)
{
    for (int i = 0; i < 4; i++)
    {

        int nextY = y + vi[i];
        int nextX = x + vj[i];

        int diff = abs(graph[x][y] - graph[nextX][nextY]);

        if (0 <= nextY && nextY < N && 0 <= nextX && nextX < N)
            if (L <= diff && diff <= R && !visited[nextX][nextY])
            {
                //조건 충족할 경우에만

                visited[nextX][nextY] = true;
                v.push_back({ nextX, nextY });
                people += graph[nextX][nextY];
                num++;
                DFS(nextX, nextY);
            }
    }
}



int main(void)
{
    cin >> N >> L >> R;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> graph[i][j];

    int result = 0;
    while (1)
    {
        memset(visited, false, sizeof(visited));
        bool found = false;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
            {
                if (visited[i][j])
                    continue;

                visited[i][j] = true;
                people = graph[i][j];
                num = 1;

                v.clear();
                v.push_back({ i, j });
                DFS(i, j);

                //국경이 하나라도 열리면

                if (num >= 2)
                {

                    found = true;
                    //업데이트
                    for (int i = 0; i < v.size(); i++)
                        graph[v[i].first][v[i].second] = people / num;
                }
            }
        }

        if (found)
            result++;
        else
            break;
    }
    cout << result << "\n";
    return 0;

}
