#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

const int MAX = 300000;

int n, k;
int bag[MAX];
pair<int, int> jewelry[MAX];
priority_queue<int> pq;


int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> jewelry[i].first >> jewelry[i].second;
	}
	for (int i = 0; i <k; i++) {
		cin >> bag[i];
	}

	sort(jewelry, jewelry + n);
	sort(bag, bag + k);

	long long result = 0;
	int idx = 0;

	for (int i = 0; i < k; i++) {
		while (idx < n && jewelry[idx].first <= bag[i]) {
			pq.push(jewelry[idx].second);
			idx++;
		}
		if (pq.empty()!=1) {
			result += pq.top();
			pq.pop();
		}
	}
	cout << result;
}