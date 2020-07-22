#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
 

    sort(A.begin(), A.end());
    sort(B.begin(), B.end(), greater<int>());

    for (int i = 0; i < A.size(); i++) {
        
            answer += A[i] * B[i];
        
    }
    return answer;
}

int main() {
    vector<int> A = { 1,2 };
    vector<int> B = { 3,4 };
    int ans = solution(A, B);
    cout << ans;
}