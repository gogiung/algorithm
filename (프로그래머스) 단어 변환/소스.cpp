#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int ans_glb = 51;

vector<bool> check;

void dfs(vector<string> words, string now, string target, int cnt) {
    // �ϼ� ��
    if (now.compare(target) == 0) {
        ans_glb = min(ans_glb, cnt); // �ּҰ� �ֱ�
        return;
    }

    // �� �� �ִ� �� ����(�Ѱ� ���� ���� ����)
    for (int i = 0; i < words.size(); i++) {
        // ���ڿ��� ���̰� �ϳ��� ���� ����
        int diff = 0;
        // �ѹ��� ���
        if (check[i] == true)
            continue;

        for (int j = 0; diff <= 1 && j < now.size(); j++) {
            if (now[j] != words[i][j])
                diff++;
        }
        // �ϳ��� ���̳��� ����
        if (diff == 1) {
            check[i] = true; // Ž��
            dfs(words, words[i], target, cnt + 1);
            check[i] = false; // Ž�� ��
        }
    }
}

int solution(string begin, string target, vector<string> words) {

    // ��� ���� �Ұ�
    if (find(words.begin(), words.end(), target) == words.end())
        return 0;
    check.assign(words.size(), false);
    dfs(words, begin, target, 0);

    // ���� ã�� ���ϸ�
    if (ans_glb == 51)
        return 0;

    // ���� ���� ����
    return ans_glb;
}