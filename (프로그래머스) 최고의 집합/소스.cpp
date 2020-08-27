#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
	vector<int> answer;
	if (n > s) //집합을 만들 수 없는 경우
		answer.push_back(-1);
	else {
		int div = s / n;
		int diff = s % n;
		int pos = n - 1;
		answer.assign(n, div); //  
		for (int i = diff; i > 0; i--) 
			answer[pos--]++;
	}
	return answer;
}

int main() {
    int n = 3;
    int s = 11;
    vector<int> ans = solution(n, s);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<" ";
    }
}