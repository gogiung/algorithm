#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, a[1001], d[1001], ans;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		d[i] = a[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[i] > a[j]) {
				d[i] = max(d[j] + a[i], d[i]);
			}
		}
		ans = max(d[i], ans);
	}
	cout << ans;
}