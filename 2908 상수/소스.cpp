#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int index = 2;
	string a, b;
	cin >> a >> b;

	while (index >= 0) {
		if (a[index] == b[index]) {
			cout << a[index--];
			continue;
		}
		if (a[index] > b[index]) {
			while (index >= 0) {
				cout << a[index--];
			}
		}
		else {
			while (index >= 0) {
				cout << b[index--];
			}
		}
	}
}