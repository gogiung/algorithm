#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int t;
	int h, w, n;
	cin >> t;

	while (t > 0) {
		cin >> h >> w >> n;
		int wide = 1;

		while (n > h) {
			n = n - h;
			wide++;
		}
		if (wide < 10) {
			cout<<n<<"0"<<wide<<endl;
		}
		else {
			cout << n << wide << endl;
		}
		t--;
	}
}