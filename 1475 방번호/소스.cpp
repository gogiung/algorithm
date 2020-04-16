#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int list[10];


int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		list[s[i]-'0']++;
	}
	int num = 0;
	for (int i = 0; i < 10; i++) {
		if (i != 9 && i != 6) {
			num = max(num, list[i]);
		}
	}
	cout << max(num, (list[6] + list[9] + 1) / 2);

}