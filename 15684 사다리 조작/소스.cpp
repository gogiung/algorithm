#include <iostream>
#include <algorithm>

using namespace std;

int N, M, H, Answer;
int map[11][30];
bool visit[11][30];

bool Ladder_Game()
{
	for (int i = 1; i <= N; i++) {
		int current_num = i;
		for (int j = 1; j <= H; j++) {
			if (visit[current_num][j] == true) {
				current_num = current_num + 1;
			}
			else if (visit[current_num-1][j]==true)
			{
				current_num = current_num - 1;
			}
		}
		if (current_num != i) return false;
	}
	return true;
}

void select_line(int Idx, int Cnt)
{
	if (Cnt >= 4) return;
	if (Ladder_Game() == true) {
		Answer = min(Answer, Cnt);
		return;
	}
	for (int i = Idx; i <= H; i++) {
		for (int j = 1; j < N; j++) {
			if (visit[j][i] == true)continue;
			if (visit[j-1][i] == true)continue;
			if (visit[j+1][i] == true)continue;

			visit[j][i] = true;
			select_line(i, Cnt + 1);
			visit[j][i] = false;
		}
	}
}

int main() {
	Answer = 99999999;
	cin >> N >> M >> H;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		visit[b][a] = true;
	}

	select_line(1, 0);
	if (Answer == 99999999) {
		Answer = -1;
	}
	cout << Answer << "\n";

	return 0;
}