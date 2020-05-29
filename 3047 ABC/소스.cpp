#include<iostream>
#include<algorithm>

using namespace std;

int list[3];
int main() {

	for (int i = 0; i < 3; i++) {
		cin >> list[i];
	}
	int A, B, C;
	string s;
	cin >> s;

	sort(list, list + 3);
	for (int i = 0; i <3; i++) {
		cout << list[s[i]-'A'] << " ";
	}

}