#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int x, y=10000;
	int sum = 0;
	int MAX = 0;
	while (y > 0) {
		cin >> x >> y;
		sum += y;
		sum -= x;
		MAX = max(MAX, sum);
	}
	cout << MAX;
}