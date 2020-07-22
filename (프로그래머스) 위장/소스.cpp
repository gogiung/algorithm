#include <iostream>
#include <string>
#include <vector> 
#include <map> 
using namespace std;
int solution(vector<vector<string>> clothes) {
    int answer = 1;

    map <string, int> attributes;

    for (int i = 0; i < clothes.size(); i++)
        attributes[clothes[i][1]]++;

    for (auto it = attributes.begin(); it != attributes.end(); it++)
        answer *= (it->second + 1);
    answer--;

    return answer;
}

int main() {
	vector<vector<string>> clothes = { {"yellow_hat", "headgear"},{"blue_sunglasses", "eyewear"},{"green_turban", "headgear"} };
	int ans = solution(clothes);
	cout<<ans;
}

