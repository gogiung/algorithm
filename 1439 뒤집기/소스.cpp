#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	string s;
	cin >> s;

	int len, zero = 0, one = 0;


	len = s.length();

	if (s[0] == '0') {
		zero = 1;
	}
	else
	{
		one = 1;
	}
	for (int i = 1; i < len; i++) {
		if (s[i] != s[i - 1]) {
			if (s[i] == '0') {
				zero++;
			}
			else
			{
				one++;
			}
		}
	}
	
	if (one < zero) {
		cout << one;
	}
	else
	{
		cout << zero;
	}
}