#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n;

	cin >> n;
	vector<int> v(n);


	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	if (v[0] != 1) {
		cout << 1;
	}
	else {
		int sum = 1;
		for (int i = 1; i < n; i++) {

			if (v[i] > sum + 1) {
				break;
			}

			sum += v[i]; 
		}
		cout << sum + 1;
	}
	return 0;
}