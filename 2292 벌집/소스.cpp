#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = 2;
	int su=1;
	while (1) {
		if (n < ans) {
			cout << su;
			return 0;
		}
		ans = ans + 6*su;
		su++;
	}
}