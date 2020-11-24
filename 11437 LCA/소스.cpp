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

//lca �Լ�
//�� ��带 ���� �� ������ �ٸ��ٸ� ������ ������ ������ ū ���� ���� �ø�
int lca(int u, int v)
{
    if (depth[u] < depth[v])
        swap(u, v);
    while (depth[u] != depth[v])
    {
        u = parent[u];//������ ������ �� ���� �θ��带 �־��ش�
    }
    while (u != v)//�� ������ ������ ������ �θ��带 �־��ش�
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
    check[1] = 1;//���� ��带 �־��ְ� push
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        for (int i = 0; i < a[x].size(); i++)
            if (!check[a[x][i]])
            {
                depth[a[x][i]] = depth[x] + 1; //�������� �Ÿ� ����
                check[a[x][i]] = 1;//üũ
                parent[a[x][i]] = x;//���������� �θ���� x��
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

