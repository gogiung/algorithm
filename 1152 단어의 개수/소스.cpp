#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string a;
	int cnt = 1;
	getline(cin,a);


	for (int i = 0; i < a.length(); i++) {
		
		if (a[i] == ' ') {
			cnt++;
		}
	}
	cout << cnt << endl;
		if (a[0] == ' ') {
			cnt = cnt - 1;
		}
		if (a[a.length() - 1] == ' ') {
			cnt=cnt-1;
		}

	
	cout << cnt;
}