#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

priority_queue<int, vector<int>, greater<> > minusQ;
priority_queue<int> plusQ;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val <= 0)
            minusQ.push(val);
        else
            plusQ.push(val);
    }

    int ans = 0;
    while (!plusQ.empty())
    {
        int v1 = plusQ.top();
        plusQ.pop();
        if (plusQ.empty())
        {
            ans += v1;
            continue;

        }
        int v2 = plusQ.top();
        plusQ.pop();
        if (v1 == 1 || v2 == 1) {
            ans += v1 + v2;
        }
        else
        {
            ans += (v1 * v2);
        }
    }

    while (!minusQ.empty())
    {
        int v1 = minusQ.top();
        minusQ.pop();
        if (minusQ.empty())
        {
            ans += v1;
            continue;

        }
        int v2 = minusQ.top();
        minusQ.pop();
       
        ans += (v1 * v2);
        
    }

    cout << ans;
    return 0;
}


