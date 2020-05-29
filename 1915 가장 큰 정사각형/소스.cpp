#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 1001

int n, m;
int map[MAX][MAX];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		string input;
		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			map[i][j + 1] = input[j] - '0';
		}
	}

	int len = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (map[i][j] != 0) {
				map[i][j] = min(map[i - 1][j - 1], min(map[i - 1][j], map[i][j - 1])) + 1;
				if (len < map[i][j]) {
					len = map[i][j];
				}
			}
		}
	}

	cout << len * len;

}