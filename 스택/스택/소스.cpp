#include<iostream>
#include<stack>
#include<string>

using namespace std;

stack<int> s;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;

		if (str == "push") {
			int x;
			cin >> x;
			s.push(x);
		}

		else if (str == "top") {
			if (s.empty()) cout << "-1" << endl;
			else cout << s.top() << "\n";
		}

		else if (str == "pop") {
			if (s.empty()) cout << "-1" << endl;
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}

		else if (str == "empty") {
			cout << s.empty() << endl;
		}
		else {
			cout << s.size() << "\n";
		}

	}
	return 0;
}