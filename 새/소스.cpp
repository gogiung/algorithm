#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;

	int sing = 1;

	int cnt = 0;

	while (N != 0) {

		if (N < sing) {
			sing = 1;
		}
		N -= sing;

		sing++;

		cnt++;

	}

	cout << cnt << endl;

	return 0;
}