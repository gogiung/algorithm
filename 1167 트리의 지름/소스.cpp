#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> 

using namespace std;
const int MAX = 100000 + 1;

int V;
bool visited[MAX];
vector<pair<int, int>> graph[MAX];
int diameter = 0;
int farthestNode = 0;

void DFS(int node, int cost)
{
    //���� ���: �̹� �湮�� ��
    if (visited[node])
        return;

    visited[node] = true;
    //���� ������Ʈ
    if (diameter < cost)
    {
        diameter = cost;
        farthestNode = node;
    }

    for (int i = 0; i < graph[node].size(); i++)
        DFS(graph[node][i].first, cost + graph[node][i].second);
}



int main()
{
    cin >> V;

    for (int i = 0; i < V; i++)
    {
        int node;
        cin >> node;

        while (1)
        {
            int node2, cost;
            cin >> node2;
            if (node2 == -1)
                break;
            cin >> cost;
            graph[node].push_back({ node2, cost });
        }
    }
    memset(visited, false, sizeof(visited));
    //��Ʈ���� ���� �� ���� ã��
    DFS(1, 0);
    //�ش� �������� ���� �� ���������� �Ÿ��� Ʈ�� ������ ����
    memset(visited, false, sizeof(visited));
    diameter = 0;
    DFS(farthestNode, 0);
    cout << diameter << "\n";
    return 0;

}