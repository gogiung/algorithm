#include<iostream>
#include<set>

using namespace std;

int main() {
	set<int> s;
	int n,m;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		s.insert(num);
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		cout << (s.find(num) == s.end() ? 0 : 1)<<" " ;
	}



}