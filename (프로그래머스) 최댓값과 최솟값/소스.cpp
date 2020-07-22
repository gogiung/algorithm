#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string token = "";
    vector<int> arr;
    int min_val=100000;
    int max_val=-10000;
    
    for (stringstream sts(s); (sts >> token);)
    {
        arr.push_back(stoi(token));
    }
    for (int i = 0; i < arr.size(); i++) {
        min_val = min(min_val, arr[i]);
        max_val = max(max_val, arr[i]);
    }

    answer = to_string(min_val) + " " + to_string(max_val);


    return answer;
}

int main() {
    string s = "1 2 3 4";
    string ans = solution(s);
    cout << ans;
}