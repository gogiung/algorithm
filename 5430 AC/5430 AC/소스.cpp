#include<iostream>
#include<string>
#include<deque>
#include<algorithm>

using namespace std;

int main() {
	int test;
	cin >> test;

	for (int t = 0; t < test; t++) {
		string func;
		cin >> func;

		int n;
		cin >> n;

		string arr;
		cin >> arr;

		deque<int> dq;

		string temp;
		for (int i = 0; i < arr.length(); i++) 
			if (arr[i] == '[')
		continue;
		else if('0'<=arr[i]&&arr[i]<='9')
		temp += arr[i];
		else if (arr[i] == ',' || arr[i] == ']') {
		if (!temp.empty()) {
			dq.push_back(stoi(temp));
			temp.clear();
		}
}

		else {

}
	}
}