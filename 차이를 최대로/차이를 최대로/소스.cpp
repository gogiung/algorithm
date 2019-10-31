//| A[0] - A[1] | +| A[1] - A[2] | +... + | A[N - 2] - A[N - 1] |
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t;
	vector<int> v;
	int res = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	do {
		int temp = 0;
		for (int i = 0; i < v.size() - 1; i++)
			temp += abs(v[i] - v[i + 1]);
		if (res < temp)
			res = temp;
	} while (next_permutation(v.begin(), v.end()));

	cout << res << endl;

	return 0;
}