#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int first[26];
string ans;
int cnt = 0;

int main() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		first[s[0] - 'a'] ++;
	}

	for (int i = 0; i < 26; i++) {
		if (first[i] >= 5) {
			ans += (char)(i + 'a');
		}
		if (cnt < first[i]) {
			cnt = first[i];
		}
	}

	if (cnt < 5) {
		cout << "PREDAJA";
		return 0;
	}
	else
	{
		cout << ans;
	}

	
}