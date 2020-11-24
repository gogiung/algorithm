#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    int n,m;
    cin >> n>>m;

    vector<int> vec;
    int cnt = 0; int sum = 0;
    int ptr = 0;
    int len = 100000;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >>s;
        vec.push_back(s);
        sum += vec[i];

        while(sum>=m){
            cnt++;
            len = min(len, i - ptr + 1);
            sum -= vec[ptr++];
        }

    }
    if (cnt == 0) {
        cout << "0";
    }
    else {
        cout << len;
    } 

}
