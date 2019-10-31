#include<iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	int result = A * B;

	while (B)
	{
		cout << B % 10 * A << "\n";
		B /= 10;

	}
	cout << result << "\n";

}

