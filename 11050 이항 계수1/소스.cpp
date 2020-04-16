#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int factorial(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result = result * i;
	}
	return result;
}

int main() {
	int n, k;
	cin >> n >> k;

	int a = factorial(n);
	int b = factorial(k);
	int c = factorial(n - k);

	int result = a / (b * c);
	cout << result;
	
}