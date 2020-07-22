#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	if (k >= n) {
		cout << "0";
		return 0;
	}

	sort(v.begin(), v.end());

	vector<int> diff(n - 1);

	for (int i = 0; i < n - 1; i++) {
		diff[i] = v[i + 1] - v[i];
	}

	sort(diff.begin(), diff.end());

	int result = 0;

	for (int i = 0; i < n - k; i++) {
		result += diff[i];
	}
	cout << result;;
}