#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> v(10);
int res;

int check(int c) {
	int len = 0;
	if (c == 0) {
		if (v[0]) return 0;
		else return 1;
	}

	while (c > 0)
	{
		if (v[c % 10]) return 0;
		len++;
		c /= 10;
	}
	return len;
}

int main() {
	int c;
	int n;
	cin >> c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v[tmp] = 1;
	}

	res = abs(c - 100);

	for (int i = 0; i <= 1000000; i++) {
		int len = check(i);
		if (len > 0)
		{
			int press = abs(c - i);
			if (res > len + press)
				res = len + press;
		}
	}
	cout << res << endl;
		return 0;
}
