#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int idx1 = -1, idx2 = -1;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		if (s == "KBS1") {
			idx1 = i;
		}
		else if (s=="KBS2")
		{
			idx2=i;
		}
	}

	int inOrder = idx1 > idx2 ? 1 : 0;

	for (int i = 0; i < idx1; i++) {
		cout << "1";
	}
	for (int i = 0; i < idx1; i++) {
		cout << "4";

	}
	for (int i = 0; i < idx2+inOrder; i++) {
		cout << "1";
	}

	for (int i = 0; i < idx2 + inOrder - 1; i++) {
		cout << "4";
	}
	

}