#include<iostream>
#include<algorithm>

using namespace std;

int list[100];

int main() {
	int n, m;
	cin >> n >> m;
	int result = 0;

	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (list[i] + list[j] + list[k] <= m && m - (list[i] + list[j] + list[k]) < m - result) {
					result = list[i] + list[j] + list[k];
				}
			}
		}
	}
	cout << result;

}