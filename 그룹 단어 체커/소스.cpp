#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int cnt = 0;

void check(string a);

int main() {
	int n;
	cin >> n;
	string str;

	for (int i = 0; i < n; i++) {
		cin >> str;
		check(str);
	}
	cout << cnt;
}

void check(string a) {
	int size = a.size();

	for (int i = 0; i < size ; i++) {

		if (a[i] != a[i + 1]) {

			for (int j = i + 1; j < size; j++) {

				if (a[j] == a[i]) 
					return;
				
			}
		}
	}
	cnt++;

}