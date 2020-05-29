#include <string>
#include <vector>
#include<algorithm>

using namespace std;


int N;

int number[12], Operator[4];

int maxResult = -1000000, minResult = 100000;

void DFS(int plus, int minus, int multiply, int divide, int cnt, int sum)

{

    if (cnt == N)

    {

        maxResult = max(maxResult, sum);

        minResult = min(minResult, sum);

    }
    if (plus > 0)

        DFS(plus - 1, minus, multiply, divide, cnt + 1, sum + number[cnt]);

    if (minus > 0)

        DFS(plus, minus - 1, multiply, divide, cnt + 1, sum - number[cnt]);

    if (multiply > 0)

        DFS(plus, minus, multiply - 1, divide, cnt + 1, sum * number[cnt]);

    if (divide > 0)

        DFS(plus, minus, multiply, divide - 1, cnt + 1, sum / number[cnt]);

}

