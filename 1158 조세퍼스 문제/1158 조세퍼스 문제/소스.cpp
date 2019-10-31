#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	queue<int> q;
	for (int i = 0; i < n; i++)
		q.push(i + 1);
	cout << "<";
	while (!q.empty()) {
		for (int j = 0; j < m - 1; j++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front();
		q.pop();
		if (!q.empty())
			cout << ", ";
	}
	cout << ">";
}