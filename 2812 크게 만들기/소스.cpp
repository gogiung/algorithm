#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	string s;
	cin >> s;

	deque<char> dq;

	for (unsigned int i = 0; i < s.length(); i++)
	{
		while (K>0 && !dq.empty() && dq.back() < s[i])
		{
			dq.pop_back();

			K--;
		}

		dq.push_back(s[i]);
	}

	for (unsigned int i = 0; i < dq.size() - K; i++)
	{
		cout << dq[i];
	}

}