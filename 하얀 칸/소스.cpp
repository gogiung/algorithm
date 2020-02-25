#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int i, j, cnt = 0;
	char a[8][8];
	for ( i = 0; i < 8; i++) {
		for ( j = 0; j < 8; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'F'&&(i+j)%2==0) {
				cnt++;
			}
		}
		
	}

	cout << cnt;

}