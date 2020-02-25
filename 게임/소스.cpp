#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
const int MAX = 1000000000;

int main() {

	long long x, y;
	cin >> x >> y;
	int z = 100 * y / x;
	if (z >= 99) {
		cout << -1;
		return 0;

	}
	int low = 0;
	int high = MAX;
	

	while (low <= high) {
		int mid = (low + high) / 2;
		int test = 100 * (y + mid) / (x + mid);
		if (z < test) {
			high = mid - 1;

		}
		else {
			low = mid + 1;
		}
	}
	cout << low;


	
}