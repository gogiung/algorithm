#include <iostream>
#include <algorithm>

using namespace std;
short a, b, C[676], D[676];
int solution(string A, string B) {
    for (int i = 1; i < A.size(); i++)
        if (isalpha(A[i - 1]) && isalpha(A[i]))
            C[(A[i - 1] & 31) * 26 + (A[i] & 31)]++;
    for (int i = 1; i < B.size(); i++)
        if (isalpha(B[i - 1]) && isalpha(B[i]))
            D[(B[i - 1] & 31) * 26 + (B[i] & 31)]++;
    for (int i = 0; i < 676; i++) a += min(C[i], D[i]), b += max(C[i], D[i]);
    return b ? a * 65536 / b : 65536;
}

int main() {
    string str1 = "handshake";
    string str2 = "shake hands";

    int ans = solution(str1, str2);
    cout << ans;
}