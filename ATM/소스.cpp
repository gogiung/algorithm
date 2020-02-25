#include<iostream>
#include<algorithm>

using namespace std;

const int MAX = 1000;

int n;
int person[MAX];

int main() {
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> person[i];
	}

	sort(person, person + n);

	int time = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j ++) {
			time =time+ person[j];
		}
	}

	cout << time << endl;

}