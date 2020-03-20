#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int d[501][501] = {  };
	int a[501][501] = {  };

	int n = 0;
	int ans = 0;

	cin >> n;

	cin >> a[1][1];

	d[1][1] = a[1][1];


	for (int i = 2; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cin >> a[i][j];
			d[i][j] = a[i][j] + max(d[i - 1][j - 1], d[i - 1][j]);
		}
	}

	for (int i = 1; i <= n; ++i) {
		ans = max(ans, d[n][i]);
	}
	cout << ans<< endl;
	return 0;
}