#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int N;
char map[6][6];
bool answer;

vector<pair<int, int>> student;
int dr[4] = { -1,0,1,0 };
int dc[4] = { 0,1,0,-1 };

bool Find_Teacher(int r, int c) { // 학생의 4방면에 선생님이 있는지 없는지 확인하는 함수 

	for (int i = 0; i < 4; i++) { // 4가지 방향에 대해서 
		int rr = r, cc = c;
		while (true) {
			rr += dr[i], cc += dc[i];
			if (rr < 0 || rr >= N || cc < 0 || cc >= N) break;
			if (map[rr][cc] == 'T')	return false;
			if (map[rr][cc] == 'O')	break;
		}
	}
	return true;
}

void Make_Wall(int r, int c, int cnt) { // 장애물을 세우는 함수 
	if (cnt == 3) { // 장애물 3개 다 세웠을 경우 
		for (int i = 0; i < student.size(); i++) {
			if (!Find_Teacher(student[i].first, student[i].second)) { // 감시 못 피할 경우 
				return;
			}
		}
		answer = true;
		return;
	}

	for (int i = r; i < N; i++) { // 벽세우기 
		for (int j = 0; j < N; j++) {
			if (i == r && j <= c)	continue;

			if (map[i][j] == 'X') {
				map[i][j] = 'O';
				Make_Wall(i, j, cnt + 1);
				map[i][j] = 'X';
			}
		}
	}
}

int main() {

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'S')	student.push_back(make_pair(i, j));
		}
	}

	Make_Wall(0, 0, 0);

	if (answer)	cout << "YES\n";
	else cout << "NO\n";
}
