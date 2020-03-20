#include<iostream>
#include<algorithm>

using namespace std;

int cache[31][31];
int west, east;

void precalculate() {

	for (int i = 1; i < 31; i++) {
		cache[1][i]=i;
	}
	for (int i = 2; i <= 30; i++) {
		for (int j = i; j <= 30; j++) {
			for (int k = j; k >= i; k--) {
				cache[i][j] += cache[i - 1][k - 1];
			}
		}
	}
}

int main() {
	int test;
	cin >> test;

	precalculate();
	for (int i = 0; i < test; i++) {
		cin >> west >> east;
		cout << cache[west][east] << endl;
	}
}
