#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> v(n);

	int maxBudget = 0;

	for (int i = 0; i < n; i++) {
		cin >> v[i];
		maxBudget = max(maxBudget, v[i]);
	}
	int m;
	cin >> m;

	int low = 0, high = maxBudget;
	int result;
	while (low<=high)
	{
		int mid=(low + high) / 2;
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += min(v[i], mid);
		}
		if (sum <= m) {
			result = mid;
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	cout << result;

}