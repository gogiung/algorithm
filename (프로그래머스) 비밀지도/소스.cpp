#include<iostream>
#include <string>
#include <vector>

using namespace std;


vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer(n);
    for (int i = 0; i < n; i++)
    {
        int f = arr1[i] | arr2[i];
        answer[i].assign(" ", n);
        for (int j = n - 1; j >= 0; j--)
        {
            if (f % 2 == 0)
            {
                answer[i][j] = ' ';
            }
            else
            {
                answer[i][j] = '#';
            }
            f /= 2;
        }
    }
    return answer;
}


int main() {
    int n = 5;
    vector<int> arr1 = { 9, 20, 28, 18, 11 };
    vector<int> arr2 = { 30, 1, 21, 17, 28 };
    vector<string> ans = solution(n, arr1, arr2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << '\n';
    return 0;
}

