#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int L;
 long long num;
long long r = 1;
long long m = 1234567891;
char str[51];

int main() {
	cin >> L >> str;

	for (int i = 0; i < L; i++) {
		num += (str[i] - 'a' + 1) * r;
		num %= m;
		r *= 31; 
		r %= m;
	}

	cout << num;

}