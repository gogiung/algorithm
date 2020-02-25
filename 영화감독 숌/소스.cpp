#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	int cnt = 0;
	int title = 665;
	string s;

	cin >> n;

	while (title++) {
		s = to_string(title);
		if (s.find("666") != -1) {
			cnt++;
		}

		if (cnt == n) {
			cout << title;
			break;
		}
	}
}