#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int gcd(int a, int b) {
	int n;
	while (b != 0) {
		n = a % b;
		a = b;
		b = n;
	}
	return a;
}

int main() {
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << "\n" << (a*b)/gcd(a, b) << "\n";
}