#include <iostream>

using namespace std;

int a[101][101];
int x[11111], y[11111];
char v[11111];
char t[4];

int px[4] = { 0,1,0,-1 };
int py[4] = { 1,0,-1,0 };

int main()
{
    int i, j, k, l, n, m;
    cin>>n>>m;
    while (m--)
    {
        cin>>i>>j;
        a[i][j] = 1;
    }
    cin>>m;
    while (m--)
    {
       cin>>k>>t;
        v[k + 1] = t[0];
    }
    i = 1;
    j = k = l = 0;
    for (m = 1;; m++)
    {
        i += px[k];
        j += py[k];
        if (i<1 || j<1 || i>n || j>n || a[i][j] < 0) break;
        if (!a[i][j])
        {
            a[x[l]][y[l]] = 0;
            l++;
        }
        x[m] = i;
        y[m] = j;
        a[i][j] = -1;
        if (v[m] == 'L') k = k + 3 & 3;
        if (v[m] == 'D') k = k + 1 & 3;
    }
    cout<< m- 1;
}
