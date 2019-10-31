#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


int main()
{
	
	int n;

	cin >> n;

	vector<int> num;

	for (int i = 0; i < n; i++) {
		num.push_back(i + 1);
	}

	sort(num.begin(), num.end());

	do {
		for (int i = 0; i < num.size(); i++)
			cout << num[i] << " ";
		cout << '\n';
	} while (next_permutation(num.begin(), num.end()));

	cout << '\n';

	//역순정렬

	sort(num.begin(), num.end(), greater<int>());
	//내림차순 stl에서 greater 함수는 functional 헤더에있음

	do {
		for (int i = 0; i < num.size(); i++)
			cout << num[i] << " ";
		cout << '\n';
	} while (prev_permutation(num.begin(), num.end()));

	return 0;
}

