#include<iostream>
#include<algorithm>

using namespace std;

int list[1000000] ;

int main() {
	int n;
	cin >> n;

	int Maxnum = -1000000;
	int Minnum = 1000000;


	for (int i = 0; i < n; i++) {
		cin >> list[i];
		if (Maxnum < list[i]) {
			Maxnum = list[i];
		}
		if (Minnum > list[i]) {
			Minnum = list[i];
		}

	}

	cout << Minnum << " " << Maxnum;



}