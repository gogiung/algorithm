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

        //��ǥ���� �����ϸ�

        if (curFloor == G)
            return cache[curFloor] - 1;



        //���� U��, �Ʒ��� D�� �� �� �ִ�

        int nextFloor[2] = { curFloor + U, curFloor - D };
        for (int i = 0; i < 2; i++)

            //���� ���� �ְ� �̹� ������ ���� �ƴ� ��쿡�� update
            if (1 <= nextFloor[i] && nextFloor[i] <= F && cache[nextFloor[i]] == 0)
            {
                cache[nextFloor[i]] = cache[curFloor] + 1;
                q.push(nextFloor[i]);
            }
    }
    return -1; //��ǥ���� �������� ���ϸ�
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


