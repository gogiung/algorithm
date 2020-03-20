#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	int left;
	cin >> n;
	int list[10] = {};
	for (int i = 0; i < n; i++) {
		cin >> left;
		for (int j = 0; j < n; j++) {
			if (left == 0 && list[j] == 0) {
				list[j] = i + 1;
				break;
			}
			else if (list[j] == 0) {
				left--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << list[i] << " ";
	}
}
