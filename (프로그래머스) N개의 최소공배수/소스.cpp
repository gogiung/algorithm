#include <iostream>
#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    int c = 0;
    while (b!=0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int LCM(int a, int b) {
    return a * b / gcd(a, b);
}


int solution(vector<int> arr) {
    int answer = 0;
    int lcm = 1;
    for (int i = 0; i < arr.size(); i++) {
        lcm = LCM(lcm, arr[i]);
    }
    answer = lcm;
    return answer;
}

int main() {
    vector<int> arr = { 2, 6, 8, 14 };
    int ans = solution(arr);
    cout << ans;
}