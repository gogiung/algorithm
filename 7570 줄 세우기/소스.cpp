#include <iostream>

using namespace std;

int n, no, mx;
int p[1000000];

int main() {
   
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> no;
        mx = max(mx, p[no] = p[no - 1] + 1);
    }
    cout << n - mx;
    return 0;
}