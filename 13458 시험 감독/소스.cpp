#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n;      //������ ��
    cin >> n;

    int arr[100001];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int major;  //�Ѱ������� ������ �� �ִ� �������� ��
    int sub;    //���������� ������ �� �ִ� �������� ��

    cin >> major;
    cin >> sub;

    long long cnt = 0;  //count.

    for (int i = 0; i < n; i++) {
        arr[i] -= major;    //�� �濡�� �� ������ ������ ���� �A��
        cnt++;

        if (arr[i] > 0) {//�Ѱ����� ������ ���� ����, ���������� ��� ���� ����.
            if (arr[i] % sub == 0) { //�� �´� ���
                cnt += (arr[i] / sub);
            }
            else {
                cnt += (arr[i] / sub) + 1;
            }
        }
    }
    cout << cnt;
    return 0;
}
