#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	set<int> s;
	

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(num);
	}

	set<int>::iterator iter;
	for (iter = s.begin(); iter != s.end(); iter++) {
		cout << *iter<<" " ;
	}

	
}