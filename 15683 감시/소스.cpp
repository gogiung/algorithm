#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

const int MAX = 8;
const int INF = 987654321;

typedef struct {
	int y, x;
}Dir;

Dir moveDir[4] = { {0,1},{-1,0},{0,-1},{1,0} };

int N, M;
int result;
int room[MAX][MAX], copyRoom[MAX][MAX];
vector<pair<int, int>> camera;
vector<int> angle;
bool visit[MAX][MAX][4];

void copy() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			copyRoom[i][j] = room[i][j];
		}
	}
}

int numofBlindSpot() {
	int result = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (copyRoom[i][j] == 0)
				result++;
		}
	}
	return result;
}

void dfs(int cnt) {
	if (cnt == camera.size()) {
		for (int i = 0; i < angle.size(); i++) {
			int y = camera[i].first;
			int x = camera[i].second;

			for (int j = 0; j < 4; j++) {
				if (visit[y][x][j]) {
					int nexty = y + moveDir[(angle[i] + j) % 4].y;
					int nextx = x + moveDir[(angle[i] + j) % 4].x;

					while (1)
					{
						if (copyRoom[nexty][nextx] == 6)
							break;
						if (!(0 <= nexty && nexty < N && 0 <= nextx && nextx < M))
							break;
						if (copyRoom[nexty][nextx] == 0)
							copyRoom[nexty][nextx] = -1;

						nexty += moveDir[(angle[i] + j) % 4].y;
						nextx += moveDir[(angle[i] + j) % 4].x;

					}

				}
			}
		}

		result = min(result, numofBlindSpot());
		copy();
		return;
	}
	for (int i = 0; i < 4; i++) {
		angle.push_back(i);
		dfs(cnt + 1);
		angle.pop_back();
	}
}


int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> room[i][j];

			if (1 <= room[i][j] && room[i][j] <= 5)
				camera.push_back({ i,j });

			switch (room[i][j])
			{
			case 1:
				visit[i][j][0] = true;
				break;
			case 2:
				visit[i][j][0] = true;
				visit[i][j][2] = true;
				break;
			case 3:
				visit[i][j][0] = true;
				visit[i][j][1] = true;
				break;
			case 4:
				visit[i][j][0] = true;
				visit[i][j][1] = true;
				visit[i][j][2] = true;
				break;
			case 5:
				visit[i][j][0] = true;
				visit[i][j][1] = true;
				visit[i][j][2] = true;
				visit[i][j][3] = true;
				break;
			}
		}
	}

	result = INF;
	copy();
	dfs(0);
	cout << result << "\n";
	return 0;
}