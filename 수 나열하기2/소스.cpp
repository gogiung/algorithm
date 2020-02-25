#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    long long  a, d, n;
    cin >> a >> d >> n;

    for (int i = 1;; i++) {

        a = a * d;
        if (i == n - 1) {
            cout << a;
            break;
        }
    }

}