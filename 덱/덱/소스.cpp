#include<iostream>
#include<string>
#include<deque>

using namespace std;

deque<int> d;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int x;
		
		if (str == "push_front") {
			cin >> x;
			d.push_front(x);
		}
		else if (str == "push_back") {
			cin >> x;
			d.push_back(x);
		}

		else if (str == "pop_front") {
			if (d.empty())
				cout << "-1" << endl;
			else {
				cout << d.front() << endl;
				d.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (d.empty())
				cout << "-1" << endl;
			else {
				cout << d.back() << endl;
				d.pop_back();
			}
		}
		else if (str == "size") {
			cout << d.size() << endl;
		}
		else if (str == "front") {
			if (d.empty())
				cout << "-1" << endl;
			else {
				cout << d.front() << endl;
			}
		}
		else if (str == "back") {
			if (d.empty())
				cout << "-1" << endl;
			else {
				cout << d.back() << endl;
			}
		}
		else 
			
				cout << d.empty() << endl;
	
		}
	return 0;
	
}