#include<iostream>
#include<algorithm>

using namespace std;

long long n, m;

long long tree[1000000];
long long mid;

bool possible(long long len) {
	long long bring = 0;
	for (int i = 0; i < n; i++) {
		if (tree[i] - mid <= 0) {
			continue;
		}
		bring += tree[i] - mid;
	}
	if (bring >= m) {
		return true;
	}
	return false;
}

int main() {
	cin >> n >> m;

	long long high=0;
	long long low = 1;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
		high = max(high, tree[i]);
	}

	long long result = 0;

	while (low <= high) {
		mid = (high + low) / 2;
		if (possible(mid)) {
			if (result < mid) {
				result = mid;
			}
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << result;
}