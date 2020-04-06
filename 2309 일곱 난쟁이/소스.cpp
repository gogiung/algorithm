#include<iostream>
#include<algorithm>

using namespace std;

int sum = 0;
int list[9];

void snowWhite() {
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - list[i] - list[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << list[k] << endl;
					}
					
				}
				return;
			}
		}
	}
}

int main() {
	
	
	
	for (int i = 0; i < 9; i++) {
		cin >> list[i];
		sum += list[i];
	}

	sort(list, list + 9);

	snowWhite();

}