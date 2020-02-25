#include<iostream>
#include<vector>

using namespace std;

int n, deletenode;
pair<int, bool> parent[50];
vector<int> ancestor[50];

int cntleaf() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < ancestor[i].size(); j++) {
			if (ancestor[i][j] == deletenode) {
				parent[i].second = true;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (i != deletenode) {
			parent[parent[i].first].second = true;
		}
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (parent[i].second == false) {
			cnt++;
		}
	}

	return cnt;

}

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> parent[i].first;
		parent[parent[i].first].second = true;
	}

	for (int i = 0; i < n; i++) {
		int curparent = parent[i].first;
		while (curparent != -1) {
			ancestor[i].push_back(curparent);
			curparent = parent[curparent].first;
		}
	}

	cin >> deletenode;
	parent[deletenode].second = true;
	parent[parent[deletenode].first].second = false;

	cout << cntleaf();


}