#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string msg)
{
    string alp = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<int> ans;
    map<string, int> dictionary;
    for (int i = 0; i < 26; i++) {
        dictionary[alp.substr(i, 1)] = i + 1;
    }

    for (int i = 0; i < msg.length();)
    {
        string chk = "";
        while (i < msg.length() && dictionary.find(chk + msg[i]) != dictionary.end()) {
            chk += msg[i];
            i++;
        }
        ans.push_back(dictionary[chk]);
        if (i < msg.length()) {
            dictionary[chk + msg[i]] = dictionary.size() + 1;
        }
    }

    return ans;
}

int main() {
    string msg = "KAKAO";
    vector<int> answer = solution(msg);

    for (int i = 0; i < answer.size(); i++) {
        cout << answer[i] << " ";
    }
}