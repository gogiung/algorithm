#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	vector<int> v;
	int sum = 0;
	for (int i = m; i <= n; i++) {
		for (int j = 1; j<= 100; j++) {
			if (i == j * j) {
				v.push_back(i);
			}
		}
	}

	sort(v.begin(),v.end() );

	int first=v.front();
	if (!v.empty()) {
		while (1) {
			sum += v.back();
			v.pop_back();
			if (v.empty()) {
				break;
		}
		}
		cout << sum << endl;
		cout << first;;
	}
	else {
		cout << -1;
	}
}