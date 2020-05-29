#include<iostream>
#include<algorithm>

using namespace std;

int list[100000];
int main() {
	string s,ans;
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		list[i] = s[i];
	}

	sort(list, list + s.length(), greater<int>());

	for (int i = 0; i < s.length(); i++) {
		ans+=list[i];
	}
	cout << ans;
}