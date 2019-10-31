#include<iostream>
#include<string>

using namespace std;

int main() {
	int testcase;
	cin >> testcase;

	while (testcase--) {
		int n;
		string str;
		cin >> n >> str;
		for (int i = 0; i < str.size(); i++) {
			for (int j = 0; j < n; j++) {
				cout << str[i] ;
			}
		}
		cout << endl;
	}
	return 0;

}