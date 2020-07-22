#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    for (int i = 0; i < phone_book.size(); i++)
        for (int j = 0; j < phone_book.size(); j++)
            if (i != j && phone_book[i].find(phone_book[j]) == 0) {
                answer = false;
                return answer;
            }
    return answer;
}

int main() {
    vector<string> phone_book = { "119"," 97674223", "1195524421" };
    bool ans = solution(phone_book);
    cout << ans;
}