#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_set>

using namespace std;

unordered_set<int> nodes;

int main() {
	int linecnt = 0; 
	int casecnt = 1;
	while (1)
	{
		int a, b;
		cin >> a >> b;
		if (a == -1 && b == -1) {
			break;
		}
		if (a == 0 && b == 0) {
			if (linecnt == 0 || nodes.size() == linecnt + 1) {
				cout << "Case " << casecnt << " is a tree." << endl;
				casecnt++;
				nodes.clear();
				linecnt = 0;
				continue;
			}
			else
			{
				cout << "Case " << casecnt << " is not a tree." << endl;
				casecnt++;
				nodes.clear();
				linecnt = 0;
				continue;
			}
		}
		nodes.insert(a);
		nodes.insert(b);
		linecnt++;
	} 

}