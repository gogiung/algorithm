#include<iostream>
#include<algorithm>

using namespace std;
	
int list[10];
int divide[10];

int ans = 0;

int main() {
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < 10; i++) {
		list[i] = list[i] % 42;
	}

	sort(list, list + 10);

	for (int i = 0; i < 10; i++) {
		if (list[i] != list[i + 1]) {
			ans++;
		}
	}
	cout << ans;
}