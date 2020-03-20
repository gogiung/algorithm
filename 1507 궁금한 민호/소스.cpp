#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
const int Max = 20;
int city[Max][Max];
bool citycopy[Max][Max];
int check;

void floyd() {
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (i == k || j == k || i == j) {
					continue;
				}
				if (city[i][j] > city[i][k] + city[k][j]) {
					check = -1;
					return;
				}
				else if(city[i][j]==city[i][k]+city[k][j])
				{
					citycopy[i][j] = false;
				}
			}
			
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> city[i][j];
			citycopy[i][j] = true;
		}
	}

	floyd();

	if (check == -1) {
		cout << -1;
	}
	else {
		int sum = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (citycopy[i][j]) {
					sum += city[i][j];
				}
			}
		}
		cout << sum / 2 << endl;
	}
	return 0;
}