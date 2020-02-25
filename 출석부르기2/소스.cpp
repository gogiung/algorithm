#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n, i;
    int a[1000] ;
    cin >> n;
    for (i = 1; i <= n; i++) {//개수 만큼 입력 받기
        cin >> a[i];
    }

    for (i = n; i >= 1; i--) {
        cout << a[i] << " ";
    }
}