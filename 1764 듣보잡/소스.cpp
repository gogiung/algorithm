#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

using namespace std;

set<string> lis;
vector<string> see;
int main() {
	
	int n, m;
	cin >> n >> m;
	string temp;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		lis.insert(temp);
	}

	for (int i = 0; i < m; i++) {
		cin >> temp;
		if (lis.find(temp) != lis.end()) {
			see.push_back(temp);
		}
	}

	sort(see.begin(), see.end());
	cout << see.size() << "\n";
	for (int i = 0; i < see.size(); i++) {
		cout << see[i] << "\n";
	}

}