#include<iostream>
#include<vector>
#include<string>

using namespace std;


int main() {
	string s;
	cin >> s;
	string temp = "";
	int result = 0;
	int minus = 0;
	for (int i = 0; i <= s.length(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == NULL) 
		{
			if (minus == 1) {
				result -= stoi(temp); 
			}
			else { 
				result += stoi(temp);
			}
			temp = "";
			if (s[i] == '-') { 
				minus = 1;
			}
		}
		else { 
			temp += s[i]; 
		}
	}
	cout << result;
}