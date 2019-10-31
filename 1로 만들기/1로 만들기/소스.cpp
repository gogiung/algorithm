#include<iostream>

using namespace std;

int main() {
	int X;
	int cnt = 0;
	cin >> X;
	while (X > 1) {
		if (X / 3 || X / 2) {
			X -= 1;
			cnt++;
		}
		if (X / 3) {
			X /= 3;
			cnt++;
		}
		if (X / 2) {
			X /= 2;
			cnt++;
		}

	}
	cout << cnt << endl;

	return 0;

}
