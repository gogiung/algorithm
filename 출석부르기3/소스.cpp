#include<iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i, j, k;
    int a[10000] = { 0 };
    int min = 23;

    scanf_s("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf_s("%d", &a[i]);
        if (min > a[i])
            min = a[i];
    }
    printf("%d", min);
 
}


