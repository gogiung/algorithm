#include<iostream>
#include<algorithm>

using namespace std;

char arr[51][51];
bool col[51];
bool row[51];

int main() {
	int x, y;
	cin >> x >> y;

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 'X') {
				col[i] = true;
				row[j] = true;
			}
		}
	}

	int true_x = 0;
	int true_y = 0;
	for (int i = 0; i < x; i++) {
		if (col[i]) {
			true_x++;
		}
	}
	for (int i = 0; i < y; i++) {
		if (row[i]) {
			true_y++;
		}
	}
	cout << max(x - true_x, y - true_y);
}