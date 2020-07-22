#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
	
	for (int i = 1; i <= yellow; i++) {
		if ((yellow % i) == 0) {
			if (((2 * i) + (2 * yellow / i) + 4) == brown)
				return { (yellow / i) + 2, i + 2 };
		}
	}

}

int main() {
	int brown = 24;
	int yellow = 24;
	vector<int> ans = solution(brown, yellow);
	for (int i = 0; i < ans.size(); i++) {
		cout << ans[i]<<" ";
	}
}
