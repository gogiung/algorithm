#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	
	int n, temp;
	int front, back;
	int cnt = 0;

	cin >> n;

	temp = n;

	if (n < 0 || n>99) {
		return 0;
	}
	
	while (1) {
		front = n / 10;
		back = n % 10;

		n = back * 10 + ((front + back) % 10);
		cnt++;
		if (n == temp) {
			cout << cnt;
			return 0;
		}
	}
}