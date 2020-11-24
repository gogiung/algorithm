#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

const int MAXN = 100001;

using namespace std;

bool comp(vector<int>a, vector<int> b) {
    return a.size() < b.size();
}

bool visit[MAXN];

vector<int> solution(string s) {
    vector<int> answer;

    vector<vector<int>> num;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            vector<int> tmp;

            bool flag = false;
            while (!flag) {
                int tmp_num = 0;
                while (1) {
                    if (s[i] == '}') {
                        tmp.push_back(tmp_num);
                        flag = true;
                        break;
                    }
                    else if (s[i] == ',')
                    {
                        tmp.push_back(tmp_num);
                        tmp_num = 0;
                    }
                    else
                    {
                        tmp_num *= 10;
                        tmp_num += s[i] - '0';
                    }
                    i++;
                }
            }
            num.push_back(tmp);
        }
    }

    sort(num.begin(), num.end(), comp);

    for (int i = 0; i < num.size(); i++) {
        for (int j = 0; j < num[i].size(); j++) {
            if (!visit[num[i][j]]) {
                visit[num[i][j]] = true;
                answer.push_back(num[i][j]);
            }
        }
    }

    return answer;
}

int main() {
    string s = "{{4,2,3},{3},{2,3,4,1},{2,3}}";
    vector<int> ans = solution(s);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

}