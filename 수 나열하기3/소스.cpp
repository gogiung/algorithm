#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    long long a, b, c, n;
    cin >> a >> b >> c>>n;
   
    for (int i = 1; i <n; i++) {
        a = a * b + c;
    }
    cout << a;
         
  
}