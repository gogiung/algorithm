#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	string s;
	cin >> s;

	for (int i = 0; i < s.size(); i++) {
		s[i] -= 3;
		if (s[i] < 65) {
			s[i] += 26;
		}
		cout << s[i];
	}
}