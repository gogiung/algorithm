#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ans;
int arr[27];
vector<int> v;
string s;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		int cnt = 1;
		for (int j = s.size() - 1; j >= 0; j--) {
			arr[s[j] - 'A'] += cnt;
			cnt = cnt * 10;
		}

	}

	for (int i = 0; i < 27; i++) {
		if (arr[i] != 0) {
			v.push_back(arr[i]);
		}
	}

	sort(v.begin(), v.end());
    
	int value = 9;

	for (int i = v.size() - 1; i >= 0; i--) {
		ans += v[i] * value;
		value--;
	}
	cout << ans;
	return 0;
}