#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
    int i, j, a;
    scanf_s("%x", &a);
    for (i = 1; i <= 15; i++)
    {
        printf("%X*%X=%X\n", a, i, a * i);
    }

}