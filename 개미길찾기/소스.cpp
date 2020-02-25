#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x=2, y=2;
    int a[11][11] = {};
    for (int i = 1; i <= 10;i++) {
        for (int j = 1; j <= 10; j++) {
            cin >> a[i][j];
        }
    }


    while (a[x][y] != 2)
    {
        a[x][y] = 9;
        if (a[x][y + 1] != 1) {
            y += 1;
        }
        else if (a[x + 1][y] != 1) {
            x += 1;
        }
        else
            break;
    }

    a[x][y] = 9;


    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <=10; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}


