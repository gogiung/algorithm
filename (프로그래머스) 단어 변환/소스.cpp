#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ans_glb = 51;

vector<bool> check;

void dfs(vector<string> words, string now, string target, int cnt) {
    // 완성 비교
    if (now.compare(target) == 0) {
        ans_glb = min(ans_glb, cnt); // 최소값 넣기
        return;
    }

    // 갈 수 있는 곳 가기(한개 차이 나면 들어가기)
    for (int i = 0; i < words.size(); i++) {
        // 문자열의 차이가 하나면 변경 가능
        int diff = 0;
        // 한번만 사용
        if (check[i] == true)
            continue;

        for (int j = 0; diff <= 1 && j < now.size(); j++) {
            if (now[j] != words[i][j])
                diff++;
        }
        // 하나만 차이나면 변경
        if (diff == 1) {
            check[i] = true; // 탐색
            dfs(words, words[i], target, cnt + 1);
            check[i] = false; // 탐색 끝
        }
    }
}

int solution(string begin, string target, vector<string> words) {

    // 결과 도출 불가
    if (find(words.begin(), words.end(), target) == words.end())
        return 0;
    check.assign(words.size(), false);
    dfs(words, begin, target, 0);

    // 답을 찾지 못하면
    if (ans_glb == 51)
        return 0;

    // 정답 도출 성공
    return ans_glb;
}