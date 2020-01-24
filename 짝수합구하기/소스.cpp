#include<iostream>
#include<stdio.h>

using namespace std;

int main() {

	int n,sum=0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i%2 == 0) {
			sum = sum + i;
			
		}
	}
	cout << sum;

}