#include<iostream>
#include<algorithm>

using namespace std;

int com, num, x, y, ans = 0;
int arr[100][100];
bool visit[100];

void dfs(int x) {
	visit[x] = true;

	for (int i = 1; i <= com; i++) {
		if (!visit[i] && arr[x][i] == 1) {
			ans++;
			dfs(i);
		}
	}
}

int main() {
	cin >> com >> num;

	for (int i = 1; i <= num; i++) {
		cin >> x >> y;

		arr[x][y] = arr[y][x] = 1;
	}

	dfs(1);

	cout << ans;
}