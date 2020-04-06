#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>

using namespace std;

bool cmp(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	return a.length() < b.length();
}

int main() {
	int n;
	cin >> n;

	vector<string> vec;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if (find(vec.begin(), vec.end(), str) == vec.end()) {
			vec.push_back(str);
		}
	}

	sort(vec.begin(), vec.end(), cmp);

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << "\n";
	}
}