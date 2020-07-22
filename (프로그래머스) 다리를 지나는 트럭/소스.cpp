#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue <int> que;
    int max_size = 0;
    int size = 0;

    for (int i = 0; i < truck_weights.size(); i++) {
        size = truck_weights[i];
        while (1) {
            if (que.empty()) {
                que.push(size); 
                max_size += size; 
                answer++;
                break;
            }
            else if (que.size() == bridge_length) {
                max_size -= que.front();
                que.pop();
            }
            else {
                if (size + max_size > weight) {
                    que.push(0); 
                    answer++;
                }
                else {
                    que.push(size); 
                    max_size += size;
                    answer++;
                    break;
                }
            }
        }
    }

    return answer + bridge_length;
}

int main() {
    int bridge_length = 2;
    int weight = 10;
    vector<int> truck_weights = { 7,4,5,6 };

    int ans = solution(bridge_length, weight, truck_weights);
    cout << ans;
}