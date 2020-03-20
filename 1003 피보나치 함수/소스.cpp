#include<iostream>
#include<algorithm>
#include<string>

#include <iostream>
using namespace std;

int main()
{
	pair<int, int> d[41] = { { 1,0 } ,{ 0, 1 } , };
	int iInput = 0;

	for (int i = 2; i < 41; ++i)
	{
		d[i].first = d[i - 1].first + d[i - 2].first;
		d[i].second = d[i - 1].second + d[i - 2].second;
	}

	cin >> iInput;
	for (int i = 0; i < iInput; ++i)
	{
		int n;
		cin >> n;
		cout << d[n].first << " " << d[n].second << endl;
	}
	return 0;
}
