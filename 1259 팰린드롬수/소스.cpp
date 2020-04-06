#include<iostream>
#include<deque>

using namespace std;

deque<int> dq;

int main() {

	string n;
	while (1) {
		cin >> n;
		if (n == "0") {
			return 0;
		}
		string temp;
		for (int i = 0; i < n.size(); i++) {
			dq.push_back(n[i]);
		}
		for (int i = 0; i < n.size(); i++) {
			temp += dq.back();
			dq.pop_back();
		}
		if (n == temp) {
			cout << "yes" << "\n";
		}
		else {
			cout << "no" << "\n";
		}
	}
}