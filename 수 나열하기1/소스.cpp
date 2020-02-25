#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int a, d,s=0, n;
    cin >> a >> d >> n;

    for (int i = 1; ; i++) {
        s = a;
        s = s + i*d;
        if (i == n-1) {
            cout<<s;
            break;
        }
    }

}
