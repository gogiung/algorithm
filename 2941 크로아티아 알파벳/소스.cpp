#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main() {
	string s;
	cin >> s;

	vector<string> vec = { "c=","c-","dz=","d-","lj","nj", "s=", "z=" };

	int idx = 0;
	for (int i = 0; i < vec.size(); i++) {
		while (1) {
			idx = s.find(vec[i]);
			if (idx == string::npos) {
				break;
			}
				s.replace(idx, vec[i].length(), "@");

		}
	}
	cout << s.length();
}