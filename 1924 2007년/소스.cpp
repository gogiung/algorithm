#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	int day = 0;

	for (int i = 1; i < x; i++) {
		if (i == 4 || i == 6 || i == 9 || i == 11) {
			day += 30;
		}
		else if (i==2)
		{
			day += 28;
		}
		else
		{
			day += 31;
		}
	}

	day += y;
	day %= 7;
	switch (day)
	{

	case 0: cout << "SUN"; break;
	case 1: cout << "MON"; break;
	case 2: cout << "TUE"; break;
	case 3: cout << "WED"; break;
	case 4: cout << "THU"; break;
	case 5: cout << "FRI"; break;
	case 6: cout << "SAT"; break;
	}

}