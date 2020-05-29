#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {

	vector<string> vec;
	string s;
	
	for (int i = 0; i <5; i++) {
		cin >> s;
		vec.push_back(s);
		
	}

	for (int i = 0; i < 5; i++) {
		if (vec[i].find("FBI") != string::npos) {
			cout << i+1 << " ";
		}
	}

	if (vec[0].find("FBI") == string::npos && vec[1].find("FBI") == string::npos && vec[2].find("FBI") == string::npos && vec[3].find("FBI") == string::npos && vec[4].find("FBI") == string::npos) {
		cout << "HE GOT AWAY!";
	}

}