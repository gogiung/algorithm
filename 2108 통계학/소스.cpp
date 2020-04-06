#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int n, temp, mean=0, mode = 0;
	int min, max = 0;
	bool isSecond = false;
	cin >> n;

	vector<int> vec(n);
	vector<int> vec2(8001, 0);
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		mean += vec[i];
		if (vec[i] <= 0) {
			temp = abs(vec[i]);
		}
		else {
			temp = vec[i] + 4000;
		}
		vec2[temp]++;
		if (vec2[temp] > max) {
			max = vec2[temp];
		}
	}

	sort(vec.begin(), vec.end());

	for (int i = -4000; i < 4001; i++) {
		if (i <= 0) {
			temp = abs(i);
		}
		else
			temp = i + 4000;

		if (vec2[temp] == max) {
			mode = i;
			if (isSecond) {
				break;
			}
			isSecond = true;
		}

	}

	cout << round(mean / (double)n) << endl;
	cout << vec[n / 2] << endl;
	cout << mode << endl;
	min = vec[0];
	max = vec[vec.size() - 1];
	cout << max - min << endl;
	

}