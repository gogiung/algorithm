#include<iostream>
#include<algorithm>

using namespace std;
int list[10000];

int main() {
	int n, x;

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> list[i];
		if (list[i] < x) {
			cout << list[i] << " ";
		}
	}

}