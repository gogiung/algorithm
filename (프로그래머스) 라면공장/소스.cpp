#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int> temp;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
	int answer = 0;
	int j = 0;
	for (int i = 0; i < k; i++) { //하루씩 진행한다고 생각한다.
		if (dates[j] == i) {//공급 날짜
			temp.push(supplies[j]);
			if (j != supplies.size() - 1) {
				j++;
			}
		}
		if (stock == 0) //잔여 밀가루가 없을 때,
		{
			stock += temp.top(); //우선순위큐에서 가장 큰 값을 가져온다.
			temp.pop();
			answer++;
		}
		stock--; //밀가루 1소비

	}
	return answer;
}

int main() {
	int stock = 4;
	vector<int> dates = { 4,10,15 };  
	vector<int> supplies = { 20,5,10 };
	int k = 30;

	int ans = solution(stock, dates, supplies, k);

	cout << ans;
}