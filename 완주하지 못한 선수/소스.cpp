#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";

    sort(participant.begin(), participant.end());
    sort(completion.begin(), completion.end());

    for (int i = 0; i < participant.size(); i++) {
        if (participant[i] != completion[i]) {
            answer= participant[i];
            return answer;
        }
    }
    
}

int main() {
    vector<string> participant = {"leo", "kiki", "eden" };
    vector<string> completion = { "eden","kiki" };
    string ans = solution(participant, completion);
    cout << ans;
}