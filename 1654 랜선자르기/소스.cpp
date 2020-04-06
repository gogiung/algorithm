#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int n, m;
long long elec[10000];

bool possible(long long len) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cnt += elec[i] / len;
	}
	if (cnt >= m) {
		return true;
	}
	return false;
}

int main() {
	cin >> n >> m;

	long long high = 0;

	for (int i = 0; i < n; i++) {
		cin >> elec[i];
		high = max(high, elec[i]);
	}

	long long result = 0;
	long long low = 1;

	while (low <= high) {
		long long mid = (low + high) / 2;
		if (possible(mid)) {
			if (result < mid) {
				result = mid;
			}
			low = mid + 1;
			
		}
		else {
			high = mid - 1;
		}
	}
	cout << result;
}