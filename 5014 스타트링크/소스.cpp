#include <iostream>
#include <queue>

using namespace std;

const int MAX = 1000000 + 1;
int F, S, G, U, D;
int cache[MAX];

int BFS()
{
    queue<int> q;
    q.push(S);
    cache[S] = 1;

    while (!q.empty())
    {
        int curFloor = q.front();
        q.pop();

        //목표층에 도달하면

        if (curFloor == G)
            return cache[curFloor] - 1;



        //위로 U층, 아래로 D층 갈 수 있다

        int nextFloor[2] = { curFloor + U, curFloor - D };
        for (int i = 0; i < 2; i++)

            //범위 내에 있고 이미 도달한 층이 아닐 경우에만 update
            if (1 <= nextFloor[i] && nextFloor[i] <= F && cache[nextFloor[i]] == 0)
            {
                cache[nextFloor[i]] = cache[curFloor] + 1;
                q.push(nextFloor[i]);
            }
    }
    return -1; //목표층에 도달하지 못하면
}

int main()
{
    cin >> F >> S >> G >> U >> D;

    int result = BFS();
    if (result == -1)
        cout << "use the stairs" << endl;
    else
        cout << result << endl;
    return 0;
}


