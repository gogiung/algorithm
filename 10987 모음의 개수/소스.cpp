#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main() {
	string s;
	int cnt = 0;

	string mo = "aeiou";
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (mo.find(s[i]) != string::npos) {
			cnt++;
		}
	}
		
	cout << cnt;
	
}