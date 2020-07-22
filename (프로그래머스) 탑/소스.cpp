#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    int temp;
    vector<int> result(heights.size(), 0);

    for (int i = heights.size() - 1; i >= 0; i--) {
        temp = heights[i];

        for (int j = i - 1; j >= 0; j--) {
            if (heights[j] > temp) {
                result[i] = j + 1;
                break;
            }
        }
    }

    return result;
}

int main() {
    vector<int> heights = { 6,9,5,7,4 };
    vector<int> ans = solution(heights);
   
    for (int i = 0; i <ans.size() ; i++) {
        cout << ans[i];
    }
    return 0;
}