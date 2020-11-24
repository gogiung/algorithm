#include <iostream>
#include <vector>
using namespace std;

int preorder[1001];
int inorder[1001];


void solution(int root, int s, int e) {
    for (int i = s; i < e; i++) {
        if (inorder[i] == preorder[root]) {
            solution(root + 1, s, i); // left sub tree
            solution(root + i + 1 - s, i + 1, e); // right sub tree
            cout << preorder[root] << " ";
        }
    }
}

int main(void) {
    int test_case;
    cin >> test_case;
    while (test_case--) {
        int n; cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> preorder[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> inorder[i];
        }
        solution(0, 0, n);
        cout << '\n';
    }
    return 0;
}
