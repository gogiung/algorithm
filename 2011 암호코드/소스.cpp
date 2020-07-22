#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int d[5001];

int main() {
	string s;
	cin >> s;

	s = " " + s;

	int size = s.length() - 1;

	d[0] = 1;

    for (int i = 1; i <= size; i++) {
        int c = s[i] - '0';
        if (1 <= c && c <= 9) {
            d[i] += d[i - 1];
            d[i] %= 1000000;
        }

        if (i == 1)
            continue;

        if (s[i - 1] == '0') 
            continue;

        c = stoi(s.substr(i - 1, 2));
        if (10 <= c && c <= 26) {
            d[i] += d[i - 2];
            d[i] %= 1000000;
        }
    }

	cout << d[size];
}