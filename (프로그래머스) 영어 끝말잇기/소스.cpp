#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int flag = 0;
    int a = 0;
    int b = 0;
   
    for (int i = 1; i < words.size(); i++) {
        string p1 = words[i - 1];
        string p2 = words[i];

        for (int j = 0; j < i; j++) {
            if (words[j] == words[i]) {
                flag = 1;
                break;
            }
        }

        int len_p1 = p1.length();
        if (p1[len_p1 - 1] != p2[0]) {
            flag = 1;
        }
        if (flag) {
            a = (i % n) + 1;
            b = (i / n) + 1;
            answer.push_back(a);
            answer.push_back(b);
            return answer;
        }
       
    }

    answer.push_back(0);
    answer.push_back(0);
    return answer;
}

int main() {
    int n = 3;
    vector<string> words = { "tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank" };
    vector<int> ans = solution(n, words);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}