#include<iostream>
#include<algorithm>

using namespace std;

int alphabet1[26];
int alphabet2[26];

int main() {
	string a, b;

	cin >> a >> b;

	int cnt = 0;
	for (int i = 0; i < a.length(); i++) {
		alphabet1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.length(); i++) {
		alphabet2[b[i] - 'a']++;
	}
	for (int i = 0; i < 26; i++) {
		if (alphabet1[i] != alphabet2[i]) {
			cnt += abs(alphabet1[i]-alphabet2[i]);
		}
	}

	cout << cnt;
}