#include<iostream>
#include<stack>

using namespace std;

int main() {
	int n,s;
	cin >> n;
	stack<int> st;
	int list[100000];
	for (int i = 0; i < n; i++) {
		cin >>s ;
		if (s == 0) {
			st.pop();
			continue;
		}
		st.push(s);
		
	}

	int sum = 0;

	while (!st.empty()) {
		sum += st.top();
		st.pop();

	}

	cout << sum;
}