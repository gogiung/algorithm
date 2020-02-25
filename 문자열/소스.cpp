#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string a, b;
	int cnt = 0, ans=50;
	cin >> a >> b;

	for (int i = 0; i <= b.length() - a.length() ; i++) {
		cnt = 0;
		for (int j = 0; j < a.length(); j++) {
			if (a[j] != b[j + i]) {
				cnt++;
			}
		}
		ans = min(cnt, ans);

	}
	cout << ans;
}