#include<iostream>
#include<algorithm>
#include<queue>

using namespace std;

int list[3];
int main() {
	for (int i = 0; i < 3; i++) {
		string temp;
		cin >> temp;
		list[i] = temp[i] ;

	}
	cout << list[0];
}