#include<iostream>
#include<algorithm>

using namespace std;


#define MAX 100001

int testcase, cnt;
int arr[MAX];
bool visit[MAX], check[MAX];

void DFS(int index) {
	int next_num = arr[index];
	visit[index] = true;

	if (!visit[next_num])
		DFS(next_num);
	else {
		if (!check[next_num]) {
			for (int i = next_num; i != index; i = arr[i]) {
				cnt++;
			}
			cnt++;
		}
	}
	check[index] = true;
}

int main() {
	
	cin >> testcase;

	while (testcase--) {
		memset(arr, 0, sizeof(arr));
		memset(visit, false, sizeof(visit));
		memset(check, false, sizeof(check));

		int N; cin >> N;

		for (int i = 1; i <= N; i++) {
			cin >> arr[i];
		}
		cnt = 0;
		for (int i = 1; i <= N; i++) {
			if (!visit[i])
				DFS(i);
		}
		cout << N - cnt << endl;
	}
	return 0;
}