#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int n, res = 987654321;
	cin >> n;
	vector<vector<int>> v(n + 1, vector<int>(n + 1, 0));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cin >> v[i][j];
	}

	vector<int> tmp(n + 1);
	for (int i = 1; i <= n; i++)
		tmp[i] = i;

	do {
		int len = 0;
		int chk = 0;
		for (int i = 1; i < tmp.size() - 2; i++)
		{
			len += v[tmp[i]][tmp[i + 1]];
			if (!v[tmp[i]][tmp[i + 1]]) chk = 1;
		}
		len += v[tmp[4]][tmp[1]];
		if (!v[tmp[4]][tmp[1]]) chk = 1;
		if (res > len&& chk == 0)
			res = len;
	} while (next_permutation(tmp.begin(), tmp.end()));

	cout << res << endl;
	return 0;
}