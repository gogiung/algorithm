#include <iostream>
#include <string>
#include <vector>


using namespace std;
vector<vector<int>> answer;
void h(int n, int from, int to, int other) {
	if (!n) return;
	else {
		h(n - 1, from, other, to);
		answer.push_back(vector<int>{from, to});
		h(n - 1, other, to, from);
	}
}
vector<vector<int>> solution(int n) {
	h(n, 1, 3, 2);
	return answer;
}

int main() {
    int n = 3;
    vector<vector<int>> ans = solution(n);

    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[0].size(); j++) {
            cout<<ans[i][j] << " ";
        }
        cout << endl;
    }
}