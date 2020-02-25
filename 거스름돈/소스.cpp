#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n=0,ans=0;
    int v[6] = { 500,100,50,10,5,1 };
    cin >> n;
    int x = 1000 - n;

    for (int i = 0; i < 6; i++) {
        while (x - v[i] >= 0) {
            ans++;
            x = x - v[i];
        }
    }
    cout << ans;
}