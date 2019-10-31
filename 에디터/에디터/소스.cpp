#include<iostream>
#include<stack>

using namespace std;

char ch[600000];
int main() {
	cin >> ch;

	stack<char> left, right;

	int n = strlen(ch);

	for (int i = 0; i < n; i++) {
		left.push(ch[i]);
	}
	int num;
	cin >> num;

	while (num--) {
		char command;
		cin >> command;

		if (command == 'L') {
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
		}
		else if (command == 'D') {
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
		}
		else if (command == 'B') {
			if (!left.empty())
				left.pop();
		}
		else if (command == 'P') {
			char p_string;
			cin >> p_string;
			left.push(p_string);
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) { 
		cout << right.top() ;
		right.pop();
	}
	return 0;

}