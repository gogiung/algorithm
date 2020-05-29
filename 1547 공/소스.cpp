#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	int point = 1;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if (a == point) {
			point = b;
		}
		else if (b==point)
		{
			point = a;
		}
	}

	cout << point ;
}