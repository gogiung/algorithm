#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main() {
	string s;
	cin >> s;

	string temp;
	for (int i = s.length()-1; i>=0; i--) {
		temp += s[i];
	}

	if (temp == s) {
		cout << 1;
	}
	else {
		cout << 0;
	}
}