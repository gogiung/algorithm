#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{

    int n, i, s = 0;
    scanf_s("%d", &n);
    for (i = 1; ; i++) //for �ݸ񹮿��� ����� ������ ���� ��� ���� �ݺ��ȴ�.
    {
        s += i;
        if (s >= n)
            break; //���̸�, ���� ����� �ݺ� �ڵ����� ������ ����������.
    } //break; �� ����Ǹ� �ݺ��� �ߴ��ϰ� ����� ���� ���´�.
    printf("%d", s);


}
