#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

typedef struct student {
	string name;
	int language;
	int english;
	int math;

}student;

bool cmp(student s1, student s2) {
	if (s1.language == s2.language) {
		if (s1.english == s2.english) {
			if (s1.math == s2.math) {
				return s1.name < s2.name;
			}
			else
			{
				return s1.math > s2.math;
			}
		}
		else
		{
			return s1.english < s2.english;
		}
	}
	else
	{
		return s1.language > s2.language;
	}
}

int main() {
	int n;
	cin >> n;
	vector<student> s(n);

	for (int i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].language >> s[i].english >> s[i].math;

	}

	sort(s.begin(),s.end(), cmp);

	for (int i = 0; i < n; i++) {
		cout << s[i].name << "\n";
	}

}