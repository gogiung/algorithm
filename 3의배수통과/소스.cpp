#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cin >> n;
        for (i = 1; i <= n; i++) //1���� ������ n���� 1�� ������Ű�鼭 �ݺ��Ѵ�.
        {
            if (i % 3 == 0)
                continue; //¦�����? �Ʒ� �κ��� �ǳʶٰ�! ���~
            printf("%d ", i); //�ᱹ ¦���� �ƴ� ������ ��µȴ�.
        }

}
