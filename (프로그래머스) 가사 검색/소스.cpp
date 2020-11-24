#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> words, vector<string> queries) {
    int wsize = words.size();
    int qsize = queries.size();

    vector<int> answer(qsize, 0);

    for (int j = 0; j < qsize; j++) {
        int qjsize = queries[j].size();
        bool front;
        int k = 0;
        if (queries[j][qjsize - 1] == '?') {
            front = false;
        }
        else {
            front = true;
            while (queries[j][k] == '?') {
                k++;
            }
        }
        int ktmp = k;
        for (int i = 0; i < wsize; i++) {
            if (words[i].size() != qjsize) continue;

            for (k = ktmp; k < words[i].size(); k++) {
                if (words[i][k] != queries[j][k] && queries[j][k] != '?')break;

                if (front) {
                    if (k == words[i].size() - 1)answer[j]++;
                }
                else {
                    if (queries[j][k] == '?') { answer[j]++; break; }
                }
            }
        }
    }

    return answer;
}

int main() {
    vector<string> words = { "frodo", "front", "frost", "frozen", "frame", "kakao" };
    vector<string> queries = { "fro??", "????o", "fr???", "fro???", "pro?" };
    vector<int> ans = solution(words, queries);
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
}