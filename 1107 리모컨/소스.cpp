#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int broken[10];

bool possible(int k) {
	if (k == 0) {
		return broken[0] ? false : true;
	}
	while (k)
	{
		if (broken[k % 10] == 1) {
			return false;
		}
		k /= 10;
	}
	return true;
}

int find(int n){
	int ret = abs(n - 100);
	int temp;
	int inf = n * 2 - 100;
	if (inf < 100) {
		inf = 100;
	}

	for (int i = 0; i <= inf; i++) {
		temp = to_string(i).length() + abs(i - n);
		if (possible(i)) {
			ret = min(temp, ret);
		}
	}
	return ret;
}

int main() {
	int n, m;
	cin >> n >> m;

	int temp;

	for (int i = 0; i < m; i++) {
		cin >> temp;
		broken[temp] = 1;
	}

	cout << find(n) << endl;
	return 0;
}