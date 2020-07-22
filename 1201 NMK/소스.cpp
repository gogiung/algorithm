#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;

	if (m + k - 1 <= n && n <= m * k) {
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			arr[i] = i + 1;
		}
		int idx = 0;
		for (int i = 1; i <= m; i++) {
			int tmep = min(idx + k, n - m + i);

			reverse(arr.begin()+idx, arr.begin() + tmep);
			idx = tmep;
		}
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
		}
		
	}
	else
	{
		cout << -1;
	}
}