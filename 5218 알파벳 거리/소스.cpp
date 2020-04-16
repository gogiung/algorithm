#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	int n;
	string a, b;
	cin >> n;
	int distance = 0;
	for (int i = 0; i < n; i++) {
		cin >> a>>b;
		cout << "Distances: ";
		for (int j = 0; j < a.length(); j++) {
			if (b[j] >= a[j]) {
				distance = b[j] - a[j];
				cout << distance << " ";
			}
			else
			{
				distance = (b[j] + 26) - a[j];
				cout << distance << " ";
			}
		}
		cout << endl;
	}
	
}