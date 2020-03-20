#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	string n;
	cin >> n;
	int sum = 0, flag = 0;

	for (int i = 0; i < n.length(); i++) {
		sum += n[i];
		if (n[i] == '0') {
			flag = 1;
		}
	}

	if ((flag == 1) && (sum % 3 == 0)) {
		sort(n.begin(), n.end(), greater<int>());
		cout << n;
	}
	else {
		cout << -1;
	}

}