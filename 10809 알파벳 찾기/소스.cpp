#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string s;
	string abc = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < abc.size(); i++) {
		if (s.find(abc[i]) == -1) {
			cout << -1 << " ";
		}
		else {
			cout << s.find(abc[i]) << " ";
		}
	}
}