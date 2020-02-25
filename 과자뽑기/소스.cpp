#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int h, w, n, l, d,x,y;
    int a[99][99] = {};
    cin >> h >> w;

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            a[i][j] = {};
        }
    }

    cin >> n;

    for (int i = 1; i <= n; i++) {

        cin >> l >> d >> x >> y;

        //가로 0 세로 1
        if (d == 0) {
            for (int j = y; j < y+l; j++) {
                a[x][j] = { 1 };
            }
        }
        else {
            for (int j = x; j < x+l; j++) {
                a[j][y] = { 1 };
            }
        }

    }

    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= w; j++) {
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
}


