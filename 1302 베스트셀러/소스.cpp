#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

int main() {

	int result = 0;
	int n;
	cin >> n;
	map<string, int> m;
	string str;
	while (n--) {
		cin >> str;
		m[str]++;
	}
	for (auto i = m.begin(); i != m.end(); i++) {
		result = max(result, i->second);
	}

	for (auto j = m.begin(); j != m.end(); j++) {
		if (result == j->second) {
			cout << j->first;
			return 0;
		}
	}



	//vector를 이용한 두번째 풀이

	/*int n;                    
	cin >> n;
	
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int max = 0;
	int num = 0;
	string temp = v[0];
	string result;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		if (v[i] == temp) {
			num++;
		}
		else {
			if (max < num) {
				max = num;
				result = temp;
			}
			temp = v[i];
			num = 1;
		}
	}
	if (max < num) {
		result = temp;
	}
	cout << result;*/
}