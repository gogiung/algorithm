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

	//��������

	sort(num.begin(), num.end(), greater<int>());
	//�������� stl���� greater �Լ��� functional ���������

	do {
		for (int i = 0; i < num.size(); i++)
			cout << num[i] << " ";
		cout << '\n';
	} while (prev_permutation(num.begin(), num.end()));

	return 0;
}

