#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int visit[100001];


int main() {
	int n, k;
	
	cin >> n >> k;

	queue<pair<int, int>> q;

	q.push(pair<int, int>(n, 0));

	while (!q.empty()) {
		int pos = q.front().first;
		int depth = q.front().second;

		if (pos == k) {
			break;
		}

		q.pop();

		visit[pos] = 1;

		if (pos - 1 >= 0 && visit[pos - 1] == 0) {
			q.push(pair<int, int>(pos - 1, depth + 1));
		}
		if (pos + 1 <= 100000 && visit[pos + 1] == 0) {
			q.push(pair<int, int>(pos + 1, depth + 1));
		}
		if (pos * 2 <= 100000 && visit[pos * 2]==0) {
			q.push(pair<int, int>(pos * 2, depth + 1));
		}

	}
	cout << q.front().second << endl;
}