#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int N;
int arr[25][25];
int visit[25][25];
int house_cnt;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

vector <int> vec;

void DFS(int x, int y) {
	house_cnt++;
	visit[x][y] = 1;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (arr[nx][ny] == 1 && visit[nx][ny] == 0) {
			DFS(nx, ny);
		}
	}
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		for (int j = 0; j < N; j++) { 
			arr[i][j] = temp[j] - '0'; 
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (arr[i][j] == 1 && visit[i][j] == 0) {
				house_cnt = 0;
				DFS(i, j);
				vec.push_back(house_cnt);
			}
		}
	}

	sort(vec.begin(), vec.end());
	cout << vec.size() << endl;

	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}
}