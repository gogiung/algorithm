#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> budgets, int M) {
	int s = budgets.size();
	sort(budgets.begin(), budgets.end());
	for (int i : budgets) {
		if (i > M / s)	return M / s;
		else {
			M -= i;
			s--;
		}
	}
	return budgets.back();
}

int main() {
    vector<int> budgets = { 110, 120, 140, 150 };
    int M = 485;
    int ans = solution(budgets, M);
    cout << ans;
}