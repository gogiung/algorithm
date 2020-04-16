#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

char result[1000001];
int main() {
	string s, bomb;
	cin >> s >> bomb;

	int idx = 0;
	for (int i = 0; i < s.length(); i++) {
		result[idx] = s[i];
		idx++;

		if (result[idx - 1] == bomb[bomb.length() - 1]) {

			if (idx - bomb.length() < 0) {
				continue;
			}
			bool detected = true;

			for (int j = 0; j < bomb.length(); j++) {
				if (result[idx - j - 1]!= bomb[bomb.length() - j - 1]) {
					detected = false;                    
					break;
				}
			}

			if (detected) {
				idx -= bomb.length();
			}

		}      

	} 


	if (!idx) {
		cout << "FRULA";
	}
	else
	{
		for (int i = 0; i < idx; i++) {
			cout << result[i];
		}
	}
}