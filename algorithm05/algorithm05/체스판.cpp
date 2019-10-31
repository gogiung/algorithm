#include<iostream>
using namespace std;

char map[8][9];
int main() {
	for (int i = 0; i < 8; i++) {
		cin >> map[i];
	}
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0 && map[i][j] == 'F') {
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	
	return 0;
}