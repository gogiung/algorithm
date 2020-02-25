#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> p(n);

        for (int i = 0; i < n; ++i) {
            cin >> p[i].first >> p[i].second;
        }

        sort(p.begin(),p.end());

        int ans = 1;
        int temp = p[0].second;
        for (int i = 1; i < n; ++i) {
            if (p[i].second < temp) {
                ans++;
                temp = p[i].second;

                if (temp == 1) {
                    break;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}