#include<iostream>
#include<algorithm>

using namespace std;

long long solution(int w, int h) {
	int gcd,start;
	long long sum = (long long)w * (long long)h;

	if (w < h) {
		start = w;
	}
	else
	{
		start = h;
	}
	for (int i = start; i > 0; i--) { //최대 공약수 구하기
		if ((w % i == 0) && (h % i == 0)) {
			gcd = i;
			break;
		}
	}

	return sum - gcd * ((w / gcd) + (h / gcd) - 1);
}

int main() {
    
	long long ans = solution(8, 12);
	cout << ans;
}