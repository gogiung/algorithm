#include<iostream>

using namespace std;

int main() {
	int E, S, M;
	int e = 1, s = 1, m = 1;
	int year = 1;

	cin >> E >> S >> M;
	while (!(E == e && S == s && M == m))
	{
		e++;
		s++;
		m++;
		if (e == 16) e = 1;
		if (s == 29) s = 1;
		if (m == 20) m = 1;
		year++;
}
	cout << year << endl;
	return 0;
	
}