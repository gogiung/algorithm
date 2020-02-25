#include <stdio.h>
#include<iostream>

using namespace std;

int main()
{
    int n, i, t;
    int a[24] = {};
    cin >> n; //개수 입력받기
    for (i = 1; i <= n; i++) //개수만큼 입력받기
    {
        cin>>t; //읽어서
        a[t] = a[t] + 1; //들어있던 값에 1만큼 더해 다시 저장. a[t]+=1 과 같다.
    }
    for (i = 1; i <= 23; i++)
    {
        printf("%d ", a[i]); //1~23 번 배열에 저장되어있는 값 출력하기
    }
}