#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int n,i=1, sum=0;
	int x=1 ;
	cin >> n;
	do {
		sum=sum+x;
		x=i++;
	} while (sum <= n);
	cout << x-1;
}