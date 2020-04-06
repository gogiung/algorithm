#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main() {
	int max = 0;
	int idx = 0;
	int arr[26] = { };

	string s;
	 string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ?";
	cin >> s;

	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
		arr[a.find(s[i])]++;
	}

	for (int j = 0; j < sizeof(arr) / sizeof(int); j++) {
		if (arr[j] == 0) {
			continue;
		}
		if (max == arr[j]) {
			idx = 26;
			continue;
		}
		if (max < arr[j]) {
			max = arr[j];
			idx = j;
		}
	}
	cout << a[idx];
}