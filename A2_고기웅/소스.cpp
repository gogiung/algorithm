// ���� 201639293

#include <iostream>
#include <cstring>

using namespace std;
int n, cnt = 0;
bool map[11][11];

bool check(int y, int x) {
	for (int i = 0; i <= y; i++) { // ���� ����
		if (map[i][x] || map[y - i][x - i] || map[y - i][x + i]) {
			// ���� �� �Ǵ� ���� �밢�� �Ǵ� ������ �밢��
			return false;
		}
	}

	return true;
}

void dfs(int y) {
	if (y == n) {
		cnt++;
		cout << cnt<<": ";
		cout << "[";
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {

				if (map[i][j] == true) {
					cout << "<" << i+1 << "," << j+1 << ">";
					
				}

			}
			if (i == n - 1) continue;
			cout << ", ";
			
		}
		cout << "]";
		cout << endl;
		return;
	}
	for (int x = 0; x < n; x++) {
		if (check(y, x)) {
			map[y][x] = true; // �õ�
			dfs(y + 1); // ������ �����غ�
			map[y][x] = 0; // �ȵǸ� ��Ʈ��ŷ
		}
	}

	return;
}

int main() {
	memset(map, 0, sizeof(map)); //�迭 �ʱ�ȭ
	cin>>n;
	dfs(0);
	cout << "Total number: "<<cnt;
	return 0;
}