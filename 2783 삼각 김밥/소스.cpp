#include<iostream>

using namespace std;

int main() {

	double s25;
	int a, b;
	cin >> a >> b;

	double min = ((double)a / b);

	int n;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (min > ((double)a / b)) {
			min=(double)a / b;
		}
		else
		{
			min=min;
		}
	}
	cout << min * 1000;
}