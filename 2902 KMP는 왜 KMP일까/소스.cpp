#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	cin >> s;

	cout << s[0];
	for (int i = 0; i < s.length(); i++) {
		int j = i + 1;
		if (s[i] == '-') {
			cout << s[j];
		}
	}
}