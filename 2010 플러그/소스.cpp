#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int plug;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> plug;
		ans += plug;

	}

	cout <<ans-(n-1);
}