#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n > 0) {
		vector<int> last(1, 0);
		int cur;
		for (int i = 0; i < n; i++) {
			cin >> cur;
			if (last.back() < cur)last.push_back(cur);
			else *lower_bound(last.begin(), last.end(), cur) = cur;
		}
		cout << last.size() - 1;
	}
	
}