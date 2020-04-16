#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	cin >> s;
	
	int list[26] = {};

	vector<string> vec = { "a","b","c","d","e","f","g","h","i","j","k","l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < 26; j++) {
			if(vec[j].find(s[i])!=string::npos) {
				list[j]++;
			}
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << list[i] << " ";
	}
}