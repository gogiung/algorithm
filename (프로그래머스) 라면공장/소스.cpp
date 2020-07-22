#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;

priority_queue<int> temp;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
	int answer = 0;
	int j = 0;
	for (int i = 0; i < k; i++) { //�Ϸ羿 �����Ѵٰ� �����Ѵ�.
		if (dates[j] == i) {//���� ��¥
			temp.push(supplies[j]);
			if (j != supplies.size() - 1) {
				j++;
			}
		}
		if (stock == 0) //�ܿ� �а��簡 ���� ��,
		{
			stock += temp.top(); //�켱����ť���� ���� ū ���� �����´�.
			temp.pop();
			answer++;
		}
		stock--; //�а��� 1�Һ�

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