#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	int a, b, c, d;
		
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] == '5') {
				s1[i] = '6';
			}
			a = stoi(s1);
		}

		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] == '6') {
				s1[i] = '5';
			}
			c = stoi(s1);
		}

		for (int i = 0; i < s2.length(); i++) {
			if (s2[i] == '5') {
				s2[i] = '6';
			}
			b = stoi(s2);
		}

		for (int i = 0; i < s2.length(); i++) {
			if (s2[i] == '6') {
				s2[i] = '5';
			}
			d = stoi(s2);
		}
		cout << c + d << " " << a + b;
		
	
}