#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int a[500][500];

int main() {
	int n, m, b;
	int max = -1;
	int min = 501;
	int time_result = INT_MAX;
	int block_height = INT_MAX;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
			if (min > a[i][j])
				min = a[i][j];
			if (max < a[i][j])
				max = a[i][j];
		}
	}

	for (int i = min; i <= max; i++) {
		int time = 0;
		int block = b;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				int height = a[j][k] - i;
				
				if (height > 0) {
					time += height * 2;
					block += height;
				}
				else if (height < 0) {
					time -= height;
					block += height;
				}
			}
		}

		if (block >= 0) {
			if (time <= time_result) {
				time_result = time;
				block_height = i;
			}
		}

	}
	cout << time_result << " " << block_height;
}