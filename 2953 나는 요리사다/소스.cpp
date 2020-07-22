#include<iostream>
#include<algorithm>

using namespace std;

int score[5][4];
int sum[5];
int ans=0;
int win = 0;

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> score[i][j];
			sum[i] += score[i][j];
		}
	}

	for (int i = 0; i < 5; i++) {
		if (ans < sum[i]) {
			ans = sum[i];
			win = i+1;
		}
		
	}

	cout << win << " "<<ans;
	

}