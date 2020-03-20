#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string input;
	int sum = 0;
	int correct = 0;
	int looptime = 0;
	int time = 0;
	   
	cin >> time;

	while (time > looptime) {
		cin >> input;

		for (int i = 0; i < input.length(); i++) {
			if (input[i] == 'O') {
				correct++;
				sum = sum + correct;
			}
			else {
				correct = 0;
			}
		}
		cout << sum << endl;
		sum = 0;
		correct = 0;
		looptime++;
	}

}