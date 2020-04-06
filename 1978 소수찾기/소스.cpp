#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

int main() {
	int size;
	cin >> size;

	int cnt = size;

	for (int i = 0; i < size; i++) {
		int n;
		cin >> n;

		if (n == 1) {
			cnt--;
			continue;
		}
		for (int j = 2; j < n ; j++) {
			if (n % j == 0) {
				cnt--;
				break;
			}
		}
	}
	cout << cnt;
}