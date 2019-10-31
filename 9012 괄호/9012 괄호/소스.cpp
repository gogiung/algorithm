#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {
	stack<char> st;
	int size;
	cin >> size;

	for (int i = 0; i < size; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == '(' || st.empty()) st.push(s[j]);
			else if (st.top() == '(')
				st.pop();
		}
		if (st.empty()) cout << "YES" << endl;
		else cout << "NO" << endl;
		while (!st.empty()) st.pop();
	}
}