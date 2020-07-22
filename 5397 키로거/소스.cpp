#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--)
	{
		string s;
		cin >> s;

		stack<char> result;
		stack<char> temp;

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '<') {
				if (!result.empty()) {
					temp.push(result.top());
					result.pop();
				}
			}
			else if (s[i]=='>')
			{
				if (!temp.empty()) {
					result.push(temp.top());
					temp.pop();
				}
			}
			else if(s[i]=='-')
			{
				if (!result.empty()) {
					result.pop();
				}
			}
			else
			{
				result.push(s[i]);
			}
		}
		while (!temp.empty())
		{
			result.push(temp.top());
			temp.pop();
		}

		string answer;

		while (!result.empty())
		{
			answer += result.top();
			result.pop();
		}
		reverse(answer.begin(), answer.end());
		cout << answer << "\n";

	}

}