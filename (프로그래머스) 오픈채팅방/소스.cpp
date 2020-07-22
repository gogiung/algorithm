#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

vector<string> solution(vector<string> record) {
	vector <string> answer;
	vector <string> uid; //record에서 아이디만 따로 저장
	map <string, string> nick_Info; //key:아이디 / value:닉네임
	stringstream ss; 
	string action; string id; string nickname;
	for (int i = 0; i < record.size(); i++) {
		ss.str(record[i]);
		ss >> action; //Enter, Leave, Change
		if (action == "Enter") {
			ss >> id;
			ss >> nickname;
			answer.push_back("님이 들어왔습니다.");
			uid.push_back(id);
			nick_Info[id] = nickname;
		}
		else if (action == "Leave") {
			ss >> id;
			answer.push_back("님이 나갔습니다.");
			uid.push_back(id);
		}
		else {
			ss >> id;
			ss >> nickname;
			nick_Info[id] = nickname;
		}
		ss.clear();
	}
	for (int i = 0; i < answer.size(); i++) {
		answer[i] = nick_Info[uid[i]] + answer[i]; //아이디에 해당하는 닉네임을 붙여줌
	}
	return answer;
}

int main() {
    vector<string> record = { "Enter uid1234 Muzi", "Enter uid4567 Prodo","Leave uid1234","Enter uid1234 Prodo","Change uid4567 Ryan" };
    vector<string>ans = solution(record);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i]<<"\n";
    }
}