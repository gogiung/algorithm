#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    map<char, int> tree;
    for (int i = 0; i < skill.size(); i++) {
        tree[skill[i]] = i + 1;
    }

    for (auto skt : skill_trees) {
        int cnt = 1;
        bool flag = true;
        for (int i = 0; i < skt.size(); i++) {
            if (tree[skt[i]] > cnt) {
                flag = false;
                break;
            }
            else if(tree[skt[i]] == cnt)
            {
                cnt++;
            }
        }

        if (flag) {
            answer++;
        }

    }
    

    return answer;
}

int main() {
    string skill = "CBD";
    vector<string> skill_trees = { "BACDE", "CBADF", "AECB", "BDA" };
    int ans = solution(skill, skill_trees);
    cout << ans;
}
