#include<iostream>
#include<algorithm>

using namespace std;

int list[1000];
int result = 0;
int sum = 0;
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> list[i];
	}

	for (int i = 0; i < n; i++) {
		if (list[i] < list[i + 1]) {
			sum += list[i + 1] - list[i];
		}
		else
		{
			result = max(result, sum);
			sum = 0;
		}
	}
	cout<<result;


}