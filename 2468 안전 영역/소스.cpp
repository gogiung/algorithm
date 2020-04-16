#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>

using namespace std;

#define MAX 101

int n;
int min_value = MAX;
int max_value = 0;
int arr[MAX][MAX];
bool visit[MAX][MAX] = { false };

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int x, int y, int height) {
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || ny < 0 || nx >= n || ny >= n) {
			continue;
		}
		if (arr[nx][ny] <= height || visit[nx][ny]) {
			continue;
		}
		visit[nx][ny] = true;
		dfs(nx, ny, height);
	}
}

int main() {
	cin >> n;
	int result = 1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			min_value = min(arr[i][j], min_value);
			max_value = max(arr[i][j], max_value);
		}
	}

	for (int i = min_value; i < max_value; i++) {
		int cnt = 0;
		memset(visit, false, sizeof(visit));

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < n; k++) {
				if (arr[j][k] > i && !visit[j][k]) {
					visit[j][k] = true;
					cnt++;
					dfs(j, k, i);
				}
			}
		}
		result = max(result, cnt);
	}
	cout << result;
}