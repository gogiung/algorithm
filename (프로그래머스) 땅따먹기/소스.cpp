#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> land)
{
    int sum[100000][4] = { land[0][0], land[0][1], land[0][2], land[0][3] };

    for (int i = 1; i < land.size(); i++)
    {
        sum[i][0] = max({ sum[i - 1][1] + land[i][0], sum[i - 1][2] + land[i][0], sum[i - 1][3] + land[i][0] });
        sum[i][1] = max({ sum[i - 1][0] + land[i][1], sum[i - 1][2] + land[i][1], sum[i - 1][3] + land[i][1] });
        sum[i][2] = max({ sum[i - 1][0] + land[i][2], sum[i - 1][1] + land[i][2], sum[i - 1][3] + land[i][2] });
        sum[i][3] = max({ sum[i - 1][0] + land[i][3], sum[i - 1][1] + land[i][3], sum[i - 1][2] + land[i][3] });
    }

    int Max = max({ sum[land.size() - 1][0], sum[land.size() - 1][1], sum[land.size() - 1][2], sum[land.size() - 1][3] });

 
    return Max;
}


int main() {
    vector<vector<int> > land = { {1, 2, 3, 5},{5, 6, 7, 8},{4, 3, 2, 1 } };
    int ans = solution(land);
    cout << ans;
}