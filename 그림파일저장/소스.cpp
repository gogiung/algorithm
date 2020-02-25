#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{

    float a, b, c, d;
    scanf_s("%f %f %f", &a, &b, &c);
    d = a * b * c  / 8 / 1024 / 1024;
    printf("%.2f MB", d);
     

}