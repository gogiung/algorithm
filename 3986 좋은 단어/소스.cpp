#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;


int main() {
	int n;
	cin >> n;

	int result = 0;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		stack<char> s;

		for (int j = 0; j < str.length(); j++) {
			
			if (!s.empty() && s.top() == str[j]) {
				s.pop();
			}
			else
			{
				s.push(str[j]);
			}

		}
		if (s.empty()) {
			result++;
		}
	}
	cout << result;
}