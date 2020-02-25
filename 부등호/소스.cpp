#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maxNum, minNum;
string sign;

//부등호가 성립하는지 확인
bool valid(vector<int> & v)
{
    //모순을 찾는다
    for (int i = 0; i < sign.length(); i++) {
        if (sign[i] == '<' && v[i] > v[i + 1]) {
            return false;
        }
        else if (sign[i] == '>' && v[i] < v[i + 1]) {
            return false;
        }
        //모순이 없을 경우
    }
    return true;
}

int main()

{
    int K;
    cin >> K;

    for (int i = 0; i < K; i++)
    {
        char temp;
        cin >> temp;
        sign += temp;
    }

    //최대
    for (int i = 9; i > 9 - (K + 1); i--) {
        maxNum.push_back(i);
    }
    while (1)
    {
        if (valid(maxNum)) {
            break;
        }
        prev_permutation(maxNum.begin(), maxNum.end());
    }

    //최소

    for (int i = 0; i < (K + 1); i++) {
        minNum.push_back(i);
    }
    while (1)
    {
        if (valid(minNum)) {
            break;
        }
        next_permutation(minNum.begin(), minNum.end());
    }

    for (int i = 0; i < maxNum.size(); i++) {
        cout << maxNum[i];
    }
    cout << "\n";
    for (int i = 0; i < minNum.size(); i++) {
        cout << minNum[i];
    }
    cout << "\n";


}