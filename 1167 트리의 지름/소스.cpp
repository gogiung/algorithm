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
    //기저 사례: 이미 방문한 곳
    if (visited[node])
        return;

    visited[node] = true;
    //지름 업데이트
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
    //루트에서 가장 먼 정점 찾고
    DFS(1, 0);
    //해당 정점에서 가장 먼 정점까지의 거리가 트리 지름의 정해
    memset(visited, false, sizeof(visited));
    diameter = 0;
    DFS(farthestNode, 0);
    cout << diameter << "\n";
    return 0;

}