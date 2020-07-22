#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 100001;

int n, c, m;
int capacity[2001];
pair<pair<int, int>, int> arr[MAX];

bool cmp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
	if (a.first.second < b.first.second) {
		return true;
	}
	else if(a.first.second== b.first.second)
	{
		if (a.first.first < b.first.first) {
			return true;
		}
	}
	return false;
}

int main() {
	cin >> n >> c >> m;
	for (int i = 0; i < m; i++) {
		cin >> arr[i].first.first >> arr[i].first.second >> arr[i].second;
	}

	sort(arr, arr + m, cmp);

	int result = 0;
	for (int i = 0; i < m; i++) {
		int boxcnt = 0;
		for (int j = arr[i].first.first; j < arr[i].first.second; j++) {
			boxcnt = max(boxcnt, capacity[j]);
		}
		int leftspace = min(arr[i].second, c - boxcnt);
		result += leftspace;

		for (int j = arr[i].first.first; j < arr[i].first.second; j++) {
			capacity[j] += leftspace;
		}
	}
	cout << result << endl;
}