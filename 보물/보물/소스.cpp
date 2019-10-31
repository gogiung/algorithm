#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	
	int n,tmp,min=0;
	vector<int> A, B;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		B.push_back(tmp);
	}

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(),greater<int>());

	for (int i = 0; i < n; i++) {
		min += A[i] * B[i];
	}

	cout << min;
	return 0;
}