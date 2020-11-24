#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int n = commands.size();
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        for (int j = commands[i][0] - 1; j < commands[i][1];j++) {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[commands[i][2]-1]);
        temp.clear();
    }

    return answer;
}

int main() {
    vector<int> array = { 1, 5, 2, 6, 3, 7, 4 };
    vector<vector<int>> commands = { {2, 5, 3},{4, 4, 1},{1, 7, 3} };
    vector<int> ans = solution(array, commands);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<" ";
    }
}