#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n, i, t;
    int a[24] = {};
    cin >> n; //���� �Է¹ޱ�
    for (i = 1; i <= n; i++) //������ŭ �Է¹ޱ�
    {
        cin>>t; //�о
        a[t] = a[t] + 1; //����ִ� ���� 1��ŭ ���� �ٽ� ����. a[t]+=1 �� ����.
    }
    for (i = 1; i <= 23; i++)
    {
        printf("%d ", a[i]); //1~23 �� �迭�� ����Ǿ��ִ� �� ����ϱ�
    }
}