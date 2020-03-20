#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, s, a;
	vector<int> d;

	cin >> n;
	while (n--) {
		cin >> s;
		a = lower_bound(d.begin(), d.end(), s) - d.begin();
		if (a == d.size()) {
			d.push_back(s);
		}
		else {
			d[a] = s;
		}
	}
	cout << d.size();

}