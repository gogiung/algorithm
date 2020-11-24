#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

queue <int > q;
bool check[100001];
vector <int> a[100001];
int depth[100001], parent[100001];
int n, u, v, m;

//lca 함수
//두 노드를 비교한 뒤 레벨이 다르다면 같아질 때까지 레벨이 큰 것을 위로 올림
int lca(int u, int v)
{
    if (depth[u] < depth[v])
        swap(u, v);
    while (depth[u] != depth[v])
    {
        u = parent[u];//레벨이 같아질 때 까지 부모노드를 넣어준다
    }
    while (u != v)//두 정점이 같아질 때까지 부모노드를 넣어준다
    {
        u = parent[u];
        v = parent[v];
    }
    return u;
}
int main() {
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }

    q.push(1);
    check[1] = 1;//시작 노드를 넣어주고 push
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < a[x].size(); i++)
            if (!check[a[x][i]])
            {
                depth[a[x][i]] = depth[x] + 1; //정점과의 거리 저장
                check[a[x][i]] = 1;//체크
                parent[a[x][i]] = x;//현재정점의 부모노드는 x임
                q.push(a[x][i]);
            }
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v;
        cout << lca(u, v) << '\n';
    }
}

