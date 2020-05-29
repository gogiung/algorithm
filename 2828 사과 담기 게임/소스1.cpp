#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int j;
	cin >> j;

	int idx = 1;
	int result = 0;

	for (int i = 0; i < j; i++) {
		int num;
		cin >> num;

		while (1) {
			bool flag = false;

			for (int j = idx; j <= idx + (m - 1); j++) {
				if (j == num) {
					flag = true;
					break;
				}
			}
				if (flag) {
					break;
				}

				if (idx > num) {
					idx--;
				}
				else
				{
					idx++;
				}
				result++;
			
		}
	}

	cout << result;
}