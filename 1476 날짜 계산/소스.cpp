#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int e, s, m;
	cin >> e >> s >> m;

	int i = 1;

	while (1)
	{
		if ((i - e) % 15 == 0 && (i - s) % 28 == 0 && (i - m) % 19 == 0) {
			cout << i;
			return 0;
		}
		i++;
	}
}