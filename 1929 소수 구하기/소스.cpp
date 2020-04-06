#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int num[1000000];

int main() {
	int n, m;
	cin >> n >> m;
	
	num[1] = 1;

	for (int i = 2; i <= m; i++) {
		if (num[i] == 0) {
			for (int j = 2; m >= i * j; j++) {

				num[i * j] = 1;
			}
		}

	}

	for (int i = n; i <= m; i++) {
		if (num[i] == 0) {
			cout << i << "\n";
		}
	}
}