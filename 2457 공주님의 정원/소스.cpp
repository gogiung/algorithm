#include <iostream> 
#include <algorithm>

using namespace std;

int n;
pair<int, int> f[100001];

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		f[i].first = a * 100 + b, f[i].second = c * 100 + d;
	}

	sort(f, f + n);

	int date = 301, flag = 0, temp = 0, ans = 0, i = -1;

	while (date <= 1130 && i < n) {
		flag = 0, i++;
		for (int j = i; j < n; j++) {
			if (f[j].first > date) break;
			if (temp < f[j].second) {
				temp = f[j].second;
				flag = 1;
				i = j;
			}
		}
		if (flag) date = temp, ans++;
		else {
			cout<<"0";
			return 0;
		}
	}

	cout << ans;

	return 0;
}