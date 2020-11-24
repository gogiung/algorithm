#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > pq;

    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        pq.push(data);
    }

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int data;
            cin >> data;
            pq.push(data);
        }
        for (int i = 0; i < n; i++)pq.pop();
    }
    cout << pq.top();
    return 0;
}