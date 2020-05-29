#include<iostream>
#include<algorithm>
#include<map>
#include<string>

using namespace std;

map<string,bool> visit;
int main() {
	int n;
	cin >> n;
	string s;

	
	for (int i = 0; i < n; i++) {
		cin >> s;
		string temp = s;
		reverse(temp.begin(), temp.end());

		if (s == temp || visit.count(temp)) {
			cout << s.length() << " " << s[s.length() / 2] << endl;
			break;
		}
		else
		{
			visit[s] = true;
		}
	}
}