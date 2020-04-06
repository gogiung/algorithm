#include<iostream>
#include<algorithm>
#include<string>

using namespace std;


int main() {
	int n;
	cin >> n;

	int score[1000];
	int Max = 0;


	for (int i = 0; i < n; i++) {
		cin >> score[i];
		Max = max(score[i], Max);
	}

	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += (double)(score[i] / double(Max) * 100);
	}
	printf("%.4lf", sum / n);
}