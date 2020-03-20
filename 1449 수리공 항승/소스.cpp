#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int n, L;
	int list[1001];

	int ans = 1;
	cin >> n >> L;

	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	sort(list, list + n);

	int st = list[0];

	for (int i = 1; i < n; i++) {

		if (list[i] - st + 1 > L) {
			ans++;
			st = list[i];
		}
	}
	cout << ans;
	
}