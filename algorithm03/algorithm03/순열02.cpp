#include<iostream>
#include<functional>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio("false");

	int n, k;
	vector<int> ind;

	cin >> n >> k;

	for (int i = 0; i < k; i++) {
		ind.push_back(1);
	}

	for (int i = 0; i < n - k; i++) {
		ind.push_back(0);
	}

	sort(ind.begin(), ind.end(), greater<int>());

	do {
		for (int i = 0; i < n; i++)
			cout << ind[i];
		cout << '\n';
	} while (prev_permutation(ind.begin(), ind.end()));

	return 0;
}