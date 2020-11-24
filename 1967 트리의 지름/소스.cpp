#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

#define MAX 10001

int N;
int sum = 0;
int End;
vector <pair <int, int>> vec[MAX];
bool visit[MAX] ;

void DFS(int start, int check_weight) {
	if (visit[start]) return;
	visit[start] = true;
	if (sum < check_weight) {
		sum = check_weight;
		End = start;
	}

	for (int i = 0; i < vec[start].size(); i++)
		DFS(vec[start][i].first, check_weight + vec[start][i].second);
}


int main() {
	cin >> N;

	int parent, child, weight;
	for (int i = 0; i < N - 1; i++) {
		cin >> parent >> child >> weight;
		vec[parent].push_back(make_pair(child, weight));
		vec[child].push_back(make_pair(parent, weight));
	}
	DFS(1, 0);

	sum = 0;
	memset(visit, false, sizeof(visit));

	DFS(End, 0);
	cout << sum;
	return 0;
}