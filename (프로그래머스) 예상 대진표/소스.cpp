#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
	int answer = 0;


	while (a > 0) {
		answer++;
		a = (a + 1) / 2;
		b = (b + 1) / 2;
		if (a == b)
			return answer;
	}

	return answer;
}

int main() {
    int n = 8, a = 4, b = 7;
    int ans = solution(n, a, b);
    cout << ans;
}