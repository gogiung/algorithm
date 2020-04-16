#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main() {
	vector<string> vec;

	string s;
	cin >> s;

	string temp;
	for (int i = 0; i < s.length(); i++) {
		for(int j=i;j<s.length();j++){
			temp += s[j];
		}
		vec.push_back(temp);
		temp = "";

	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i<vec.size(); i++) {
		cout << vec[i] << endl;
	}
}