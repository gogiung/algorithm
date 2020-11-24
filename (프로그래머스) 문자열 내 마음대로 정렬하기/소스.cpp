#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int i;

bool cmp(string a,string b) {
    if (a[i] < b[i]) {
        return a[i] < b[i];
    }
    if (a[i] == b[i]) {
        return a < b;
    }
}

vector<string> solution(vector<string> strings, int n) {
    
    i = n;
    sort(strings.begin(), strings.end(), cmp);
    return strings;
}

int main() {
    vector<string> strings = {"sun", "bed", "car"};
    int n = 1;
    vector<string> ans = solution(strings, n);
    for (string i : ans) {
        cout << i << " ";
    }
}