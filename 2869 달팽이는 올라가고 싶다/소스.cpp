#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int a, b, v;
	cin >> a >> b >> v;

	int day;
	day = (v - b-1 ) / (a - b) + 1;
	cout << day;
}