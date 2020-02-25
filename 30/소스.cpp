#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int cmp(int a, int b) {
    return a > b;
}

int main() {
    string n;
    cin >> n;
    int sum = 0, flag = 0;

    for (int i = 0; i < n.length(); i++) {
        sum = sum + (n[i] - '0');
        if (n[i] == '0')
            flag = 1;
    }

    if ((flag == 1) && (sum % 3 == 0)) {
        sort(n.begin(), n.end(), cmp);
        cout << n;
    }
    else
    cout << -1;

}