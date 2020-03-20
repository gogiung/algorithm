#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int d[100001] = {};
	int n;
	cin >> n;

	int ans = -1000;
	for (int i = 1; i <= n; i++) {
		cin >> d[i];
		d[i] = max(d[i], d[i] + d[i - 1]);
		ans = max(ans, d[i]);
	}
	cout << ans;

	

}