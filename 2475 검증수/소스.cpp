#include<iostream>
#include<algorithm>

using namespace std;

int list[5];

int main() {
	int ans = 0;
	for (int i = 0; i < 5; i++) {
		cin >> list[i];
		ans += list[i] * list[i];
	}

	cout << ans % 10;

	
	
}