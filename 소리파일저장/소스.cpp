#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
  
    float a, b, c, d, e;
    scanf_s("%f %f %f %f", &a, &b, &c, &d);
    e = a * b * c * d / 8 / 1024 / 1024;
    printf("%.1f MB", e);


}