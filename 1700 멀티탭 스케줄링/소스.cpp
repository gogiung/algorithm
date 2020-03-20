#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, K;
    int schedule[101] = {};
    int plug[101] = {};
    cin >> N >> K;

    for (int i = 0; i < K; i++) {
        cin >> schedule[i];
    }
    int result = 0;

    for (int i = 0; i < K; i++){

        bool pluggedIn = false;

        for (int j = 0; j < N; j++) {
            if (plug[j] == schedule[i])
            {
                pluggedIn = true;
                break;
            }
        }
        if (pluggedIn) {
            continue;
        }

        for (int j = 0; j < N; j++) {

            if (plug[j]==NULL)
            {
                plug[j] = schedule[i];
                pluggedIn = true;
                break;

            }
        }
        if (pluggedIn) {
            continue;
        }

        int idx;
        int deviceIdx = -1;

        for (int j = 0; j < N; j++){
            int lastIdx = 0;

            for (int k = i + 1; k < K; k++)
            {
                if (plug[j] == schedule[k]) {
                    break;
                }
                lastIdx++;
            }
            if (lastIdx > deviceIdx)
            {
                idx = j;
                deviceIdx = lastIdx;
            }
        }
        result++;
        plug[idx] = schedule[i];
    }
    cout << result;
}