#include<iostream>
#include<algorithm>

using namespace std;


int main() {
	cin.tie(NULL);

	int n,m;
	cin >> n;
	int a[100000] = {};

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);

	cin >> m;

	int input[100000];

	for (int i = 0; i < m; i++) {
		cin >> input[i];

		int s = 0;
		int e = n;
		int mid;

		bool check = false;

		while (s <= e) {
			mid = (s + e) / 2;

			if (input[i] < a[mid]) {
				e = mid - 1;
			}
			else if (input[i] > a[mid]) {
				s = mid + 1;
			}
			else
			{
				check = true;
				break;
			}
		}
		if (check) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
		
	}

}