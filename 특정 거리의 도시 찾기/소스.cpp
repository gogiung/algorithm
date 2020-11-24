#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int N, M, K, X;
vector<int> city[300001];
bool visited[300001];

deque<int> BFS(int start_city) {
	deque<int> visited_city;

	vector<int> ans;
	visited[start_city] = true;
	visited_city.push_back(start_city);
	int cur_cnt = 0;

	while (!visited_city.empty()) {
		int size = visited_city.size();

		if (cur_cnt == K)	break;

		for (int t = 0; t < size; t++) {
			int cur_city = visited_city.front();
			visited_city.pop_front();

			for (int i = 0; i < city[cur_city].size(); i++) {
				int next_city = city[cur_city][i];
				if (!visited[next_city]) {
					visited[next_city] = true;
					visited_city.push_back(next_city);
				}
			}
		}
		cur_cnt++;
	}
	return visited_city;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> K >> X;
	for (int i = 0; i < M; i++) {
		int st, ed;
		cin >> st >> ed;
		city[st].push_back(ed);
	}
	deque<int> answer = BFS(X);

	if (answer.empty()) cout << "-1\n";
	else {
		sort(answer.begin(), answer.end());
		for (int i = 0; i < answer.size(); i++)
			cout << answer[i] << "\n";
	}
}
