#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	vector<int> vec_n;
	vector<int> vec_m;
	int result = 0;

	int n,m,s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		vec_n.push_back(s);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s;
		vec_m.push_back(s);
	}

	sort(vec_n.begin(), vec_n.end(),greater<int>());
	sort(vec_m.begin(), vec_m.end(), greater<int>());

	if (vec_n[0] < vec_m[0]) {
		cout << -1 << endl;
		return 0;
	}

	while (1)
	{
		result++;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < vec_m.size(); j++) {
				if (vec_n[i] >= vec_m[j]) {
					vec_m.erase(vec_m.begin() + j);
					break;
				}
			}
		}
		if (vec_m.size() == 0)
			break;

	}
	cout << result;

}