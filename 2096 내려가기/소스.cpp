#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int map[100001][3];
int mindp[3];
int maxdp[3];

int main() {
	int x, y, z;
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> map[i][0];
		cin >> map[i][1];
		cin >> map[i][2];
	}

	maxdp[0] = map[1][0];
	maxdp[1] = map[1][1];
	maxdp[2] = map[1][2];

	mindp[0] = map[1][0];
	mindp[1] = map[1][1];
	mindp[2] = map[1][2];

	for (int i = 2; i <= n; i++) {
		x = maxdp[0];
		y = maxdp[1];
		z = maxdp[2];

		maxdp[0] = max(x, y) + map[i][0];
		maxdp[1] = max({ x, y,z }) + map[i][1];
		maxdp[2] = max(y,z) + map[i][2];

		x = mindp[0];
		y = mindp[1];
		z = mindp[2];

		mindp[0] = min(x, y) + map[i][0];
		mindp[1] = min({x, y, z}) + map[i][1];
		mindp[2] = min(y, z) + map[i][2];
	}

	cout << max({ maxdp[0],maxdp[1],maxdp[2] }) << " " << min({ mindp[0],mindp[1],mindp[2] }) << endl;
	
}