#include <iostream>

using namespace std;

const int MAX = 100000 + 1;
int inOrder[MAX], postOrder[MAX];
int idx[MAX];

void preOrder(int inBegin, int inEnd, int postBegin, int postEnd)
{
    //모순
    if (inBegin > inEnd || postBegin > postEnd)
        return;
    int root = postOrder[postEnd];
    cout << root << " ";
    //왼쪽
    preOrder(inBegin, idx[root] - 1, postBegin, postBegin + (idx[root] - inBegin) - 1);
    //오른쪽
    preOrder(idx[root] + 1, inEnd, postBegin + (idx[root] - inBegin), postEnd - 1);
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
        cin >> inOrder[i];

    for (int i = 0; i < N; i++)
        cin >> postOrder[i];

    for (int i = 0; i < N; i++)
        idx[inOrder[i]] = i;

    preOrder(0, N - 1, 0, N - 1);

    cout << "\n";
    return 0;
}
