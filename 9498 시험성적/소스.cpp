#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	int ans = n / 10;

	switch (ans)
	{
	case 10:
	case 9:
		cout << "A";
		break;
	case 8:
		cout << "B";
		break;
	case 7:
		cout << "C";
		break;
	case 6:
		cout << "D";
		break;
	default:
		cout << "F";
		break;
	}
}