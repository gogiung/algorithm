#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 200000;

int n, c;
int house[MAX];

bool possible(int dist) {
	int cnt = 1;
	int prev = house[0];
	for (int i = 0; i < n; i++) {
		if (house[i] - prev >= dist) {
			cnt++;
			prev = house[i];
		}
	}
	if (cnt >= c) {
		return true;
	}
	return false;
}

int main() {
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> house[i];
	}

	sort(house, house + n);

	int low = 1, high = house[n - 1] - house[0];
	int result = 0;

	while (low<=high)
	{
		int mid = (low + high) / 2;
		if (possible(mid)) {
			result = max(result, mid);
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << result;
}