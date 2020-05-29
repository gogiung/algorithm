#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	vector<string> v(n + 1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}

	vector<pair<string, int>> sortV(n);
	for (int i = 0; i < n; i++) {
		sortV[i].first = v[i + 1];
		sortV[i].second = i + 1;
	}

	sort(sortV.begin(), sortV.end());

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;

		if (s[0] >= '0' && s[0] <= '9') {
			int idx = 0;
			for (int j = 0; j < s.length(); j++) {
				idx += s[j] - '0';
				idx *= 10;
			}
			idx /= 10;
			cout << v[idx] << "\n";
		}
		else
		{
			int low = 0;
			int high = n - 1;
			while (low<=high)
			{
				int mid = (low + high) / 2;

				if (sortV[mid].first == s) {
					cout << sortV[mid].second << "\n";
					break;
				}
				else if (sortV[mid].first<s)
				{
					low = mid + 1;
				}
				else
				{
					high = mid - 1;
				}
			}
		}
	}
}