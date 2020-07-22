#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int left_point = 0;  
    int right_point = people.size() - 1; 
    sort(people.begin(), people.end(), greater<int>());

    while (left_point <= right_point)
    {
        if (people[left_point] + people[right_point] <= limit) {
            right_point--;
        }
        left_point++;
        answer++;
    }
    return answer;

}

int main() {
    vector<int> people = { 80, 50, 50,40, 30 };
    int limit = 100;
    int ans = solution(people, limit);
    cout << ans;
}