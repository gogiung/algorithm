#include <iostream>
#include <set>
#include <algorithm>

using namespace std;
int N, M, num;
set<int> base;
int main()
{
	
	cin >> N;
	for (int i = 0; i < N; ++i) {
		cin >> num;
		base.insert(num);
	}
	cin >> M;
	for (int i = 0; i < M; ++i) {
		cin >> num;
		cout << (base.find(num) == base.end() ? 0 : 1) << '\n';
	}
	return 0;
}
