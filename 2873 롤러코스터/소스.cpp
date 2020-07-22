#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

const int MAX = 1000;
const int INF = 987654321;

int arr[MAX][MAX];
string result;

int main() {
	int r, c;
	cin >> r >> c;

	if (r % 2) {
		for (int y = 0; y < r; y++) {
			for (int x = 0; x < c - 1; x++) {
				if (y % 2 == 0) 
					result += 'R';
				
				else
				
					result += 'L';
			}
			if (y != r - 1) 
				result += 'D';
			
		}
	}

	else if (!(r % 2) && c % 2) {
		for (int x = 0; x < c; x++) {
			for (int y = 0; y < r - 1; y++) {
				if (x % 2 == 0)
					result += 'D';
				else
					result += 'U';
			}
			if (x != c - 1)
				result += 'R';
		}
	}

    else if (!(r % 2) && !(c % 2))

    {
        pair<int, int> minHappy; 

        int minScore = INF;

        for (int y = 0; y < r; y++)
            for (int x = 0; x < c; x++)
            {
                cin >> arr[y][x];
                if ((y + x) % 2 && minScore > arr[y][x])
                {
                    minScore = arr[y][x];
                    minHappy = { y, x };
                }
            }
        int newR = minHappy.first % 2 ? minHappy.first - 1 : minHappy.first;

        for (int y = 0; y < newR; y++)
        {
            for (int x = 0; x < c - 1; x++)
                if (y % 2 == 0)
                    result += 'R';
                else
                    result += 'L';
            result += 'D';
        }

        int newC = minHappy.second;
        for (int x = 0; x < newC; x++)
            if (x % 2 == 0)
                result += "DR";
            else
                result += "UR";
        for (int x = newC; x < c - 1; x++)
            if (x % 2 == 0)
                result += "RD";
            else
                result += "RU";

        if (minHappy.first % 2 == 0)
            newR = r - (minHappy.first + 2);
        else
            newR = r - (minHappy.first + 1);

        for (int y = 0; y < newR; y++)
        {
            result += 'D';

            for (int x = 0; x < c - 1; x++)
                if (y % 2 == 0)
                    result += 'L';
                else
                    result += 'R';
        }
    }
    cout << result << "\n";
    return 0;

	
}