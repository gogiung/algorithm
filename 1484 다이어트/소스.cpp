#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int g;
	cin >> g;
	long long e = 1, s = 1;
	bool existed = false;
	while (true)
	{
		if (e * e - s * s == g) {
			existed = true;
			cout << e<<endl;
		}
		if (e - s == 1 && e * e - s * s > g) break;
		if (e * e - s * s > g) s++;
		else e++;
		
	}
	if (!existed) cout << -1;
}

