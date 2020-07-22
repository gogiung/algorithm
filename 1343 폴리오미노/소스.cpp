#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string board;
string ans;

int main() {
	cin >> board;

	for (int i = 0; i < board.size();) {
		if (board[i] == '.') {
			ans += '.';
			i += 1;

			continue;
		}
		int cnt = 0;
		for (int j = i; j < board.size() && board[j] == 'X'; j++) {
			cnt++;
		}
		i += cnt;

		if (cnt % 2 == 1) {
			cout << "-1";
			return 0;
		}
		while (1)
		{
			if (cnt >= 4) {
				ans += "AAAA";
				cnt -= 4;
			}
			else if (cnt==2)
			{
				ans += "BB";
				cnt -= 2;
			}
			else
			{
				break;
			}
		}
	}
	cout << ans;
}