#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	int line[10] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		int left;
		cin >> left;

		for (int j = 0; j < n; j++) {

			if (left == 0 && line[j] == 0) {
				line[j] = i + 1;
				break;
			}

			else if (line[j] == 0) {
				left--;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << line[i] << " ";
	}
}