#include<iostream>
#include<algorithm>

using namespace std;

int n, m, Max, hd;
char DNA[1050][1050];

char change(int a, int t, int g, int c, int Max) {
	if (Max == a) {
		return 'A';
	}
	else if (Max == c) {
		return 'C';
	}
	else if (Max == g) {
		return 'G';
	}
	else {
		return 'T';
	}

}

int main() {
	int a, t, g, c;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> DNA[i];
	}
	for (int i = 0; i < m; i++) {
		a = 0, t = 0, g = 0, c = 0;
		for (int j = 0; j < n; j++) {
			switch (DNA[j][i])
			{
			case'A':a++;
				break;
			case'T':t++;
				break;
			case'G':g++;
				break;
			case'C':c++;
				break;
			}
		}
		Max = max(a, max(t, max(g, c)));
		hd += (n - Max);
		cout << change(a, t, g, c, Max);
	}
	cout << endl;
	cout << hd;
}