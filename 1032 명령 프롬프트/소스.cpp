#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	vector<string> vec;
	int n;
	cin >> n;
	string s;
	cin >> s;
	string result = s;
	for (int i = 1; i < n; i++) {
		string temp;
		cin >> temp;

		for (int j = 0; j < s.length(); j++) {
			if (s[j] != temp[j]) {
				result[j] = '?';
			}
		}
	}
	cout << result;
	return 0;

	
}