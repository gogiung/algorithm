#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	string s;
	int JOI_num = 0;
	int IOI_num = 0;

	cin >> s;

	for (int i = 0; i < s.size() - 2; i++) {
		if (s[i] == 'J' && s[i + 1] == 'O' && s[i + 2] == 'I') {
			JOI_num++;
		}
		else if (s[i] == 'I' && s[i + 1] == 'O' && s[i + 2] == 'I') {
			IOI_num++;
		}
				
	}
	cout << JOI_num << endl << IOI_num;
}