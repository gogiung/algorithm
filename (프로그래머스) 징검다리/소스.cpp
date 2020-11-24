#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int distance, vector<int> rocks, int n) {
    int cnt = 0;
    rocks.push_back(0);
    rocks.push_back(distance);
    sort(rocks.begin(), rocks.end());
    int low = 1;
    int high = distance;
    int mid;
    int val = 0;
    while (low != high) {
        mid = (low + high + 1) / 2;
        cnt = 0;
        for (int i = 0; i < rocks.size() - 1; i++) {
            val = rocks[i + 1] - rocks[i];
            while (cnt < n && val < mid && i < rocks.size() - 2) {
                i++;
                val += rocks[i + 1] - rocks[i];
                cnt++;
            }
            if (val < mid) {
                cnt = n + 1;
                break;
            }
        }
        if (cnt > n) {
            high = mid - 1;
        }
        else {
            low = mid;
        }
    }

    return low;
}

int main() {
    int distance = 25; 
    vector<int> rocks = { 2,4,11,21,17 };
    int n = 2;
    int ans = solution(distance, rocks, n);
    cout << ans;
}