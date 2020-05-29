#include <string>
#include <vector>
#include<cmath>

using namespace std;

vector<int> left(10,0);
vector<int> right(10,0);

string solution(vector<int> numbers, string hand) {

    string answer = "";
    

    
    for (int k = 0; k < numbers.size(); k++) {


        if (numbers[k] == 1 || numbers[k] == 4 || numbers[k] == 7) {
            answer += 'L';
            left.push_back(numbers[k]);
        }

        else if (numbers[k] == 3 || numbers[k] == 6 || numbers[k] == 9) {
            answer += 'R';
            right.push_back(numbers[k]);
        }
        else
        {
            if (right.back() == 0) {
                answer += 'L';
                left.push_back(numbers[k]);
            }


            else if (abs(numbers[k] - left.back()) < abs(numbers[k] - right.back())) {
                answer += 'L';
                left.push_back(numbers[k]);
            }
            else if (abs(numbers[k] - left.back()) > abs(numbers[k] - right.back())) {
                answer += 'R';
                right.push_back(numbers[k]);
            }
            else
            {
                answer += toupper(hand[0]);
                if (hand[0] == 'l') {
                    left.push_back(numbers[k]);
                }
                else
                {
                    right.push_back(numbers[k]);
                }
            }


        }
    }
    return answer;
}

