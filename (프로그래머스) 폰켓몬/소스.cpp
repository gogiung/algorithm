#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> nums)
{
    int cnt = 1;
    int pick = nums.size() / 2;
    int answer = 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] < nums[i + 1])
            cnt++;
    }

    if (cnt > pick) {     //2 3 4 5 6 7
        answer = pick;
    }
    else {
        answer = cnt;
    }

    return answer;
}

int main() {
    vector<int> nums = { 2,3,4,5,6,7 };
    int ans = solution(nums);
    cout << ans;
}