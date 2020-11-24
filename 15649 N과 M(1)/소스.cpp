#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int N; int M;
int num[8];
int res[8];

bool isPrint = false;
int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		num[i] = i + 1;
	}

	do {
		isPrint = false;
		for (int j = 0; j < M; j++) {
			if (res[j] != num[j]) {
				res[j] = num[j];
				isPrint = true;
			}
		}

		if (isPrint) {
			for (int j = 0; j < M; j++) {
				cout << res[j] << " ";
			}
			cout << '\n';
		}
	} while (next_permutation(num, num + N));

	return 0;
}