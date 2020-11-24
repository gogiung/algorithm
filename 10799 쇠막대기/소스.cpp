#include <iostream>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int main() {
	string str;
	stack<int> stk;
	int result = 0;
	char before;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '(')
			stk.push(1);
		else
		{
			stk.pop();
			if (before == '(')
				result += stk.size();
			else
			{
				result++;
			}
		}
		before = str[i];
	}

	cout << result;
}