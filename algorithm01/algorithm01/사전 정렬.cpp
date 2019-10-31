#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string word;
vector<string> dic;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> word;
		dic.push_back(word);
	}

	sort(dic.begin(), dic.end());

	cout << "======================"<< endl;

	for (int i = 0; i < dic.size(); i++)
		cout << dic[i] << endl;

	return 0;
}