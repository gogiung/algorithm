#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		
		cin >> v[i];
		
	}

	sort(v.begin(), v.end());
	int m;
	cin >> m;

	for (int i = 0; i < m; i++) {
		int y;
		cin >> y;

		cout << upper_bound(v.begin(), v.end(), y) - lower_bound(v.begin(), v.end(), y) << " ";
	}
	return 0;
}