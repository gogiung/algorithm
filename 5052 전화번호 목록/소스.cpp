#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int test;
	int n;
	int flag;
	int current;
	int next;
	char s[10010];
	vector<string> v;

	cin >> test;

	while (test--) {
		flag = 0;

		cin>>n;

		for (int i = 0; i < n; ++i) {
			cin>>s;
			v.push_back(s);
		}

		sort(v.begin(), v.end());

		for (int i = 0; i < n - 1; ++i) {
			current = v[i].length();
			next = v[i + 1].length();
			if (current >= next) {
				continue;
			}
			if (v[i + 1].substr(0, current) == v[i]) {
				printf("NO\n");
				flag = 1;
				break;
			}
		}

		if (flag == 0) {
			printf("YES\n");
		}

		v.clear();
	}

	return 0;
}