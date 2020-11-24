#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[10000];



int main()
{
    int sum=0, cnt = 0, ptr=0;
    int n, ans;
    vector<int> vc;

    cin >> n >> ans;

    for (int i = 0; i < n; i++)
    {
        int get;
        cin >> get;
        vc.push_back(get);
        sum += vc[i];

        while (sum > ans)
            sum -= vc[ptr++];

        cnt += (sum == ans);
    }

    cout << cnt;

    return 0;
}

