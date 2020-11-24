#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;

	int left=0;
	int right = 0;

	int size = s.size();
	for (int i = 0; i < size / 2 ; i++) {
		left += s[i];
	}
	for (int i = size / 2; i < size ; i++) {
		right += s[i];
	}
	
	if (right == left) {
		cout << "LUCKY";
	}
	else
	{
		cout << "READY";
	}
}
