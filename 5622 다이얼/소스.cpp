#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> vec = {"1", "1", "1", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

	int sum = 0;

	for (int i = 0; i < s.length(); i++) {
		for (int j = 0; j < vec.size(); j++) {
			if (vec[j].find(s[i])!=string::npos) {
				sum += j;
			}
		}
	}
	cout << sum;
}