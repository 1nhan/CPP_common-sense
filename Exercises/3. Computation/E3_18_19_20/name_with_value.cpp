/************************************************************************
*
* 	이름과 값 쌍(name - value pair)을 입력받는 프로그램을 작성하세요.
*	예: Joe 17, Barbara 22 각 이름은 names 벡터에, 
*	각 값은 scores 벡터에 같은 위치로 저장하세요.
*	예 : names[7] == "Joe"이면 scores[7] == 17 
*	입력 종료 조건 : NoName 0 이름이 중복되면 오류 메시지를 출력하고 종료하세요.
*	모든(이름, 점수) 쌍을 한 줄씩 출력하세요.
*
*	위 프로그램을 수정하여, 
*	이름과 값 쌍을 입력한 후 루프를 통해 이름을 입력하면 해당 점수를 출력하거나 
*	"name not found"를 출력하세요.
*
*	위 프로그램을 수정하여, 
*	이름과 값 쌍을 입력한 후 루프를 통해 점수를 입력하면 해당 점수를 가진 모든 이름을 
*	출력하거나 "score not found"를 출력하세요.
*
*************************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

int main(void) {
	vector<string>name_vec;
	vector<double>value_vec;
	int value = -1;
	string name = " ";
	while (cin >> name >> value) {
		if (name == " ") error("no name");
		name_vec.push_back(name);
		value_vec.push_back(value);
		if (name == "NoName" && value == 0) {
			error("error massage");
			if (name_vec.size() != value_vec.size()) 
				error("Different size");
			
			for (int i = 0; i < name_vec.size(); ++i) 
				cout << name_vec[i] << ' ' << value_vec[i] << '\n';
			return 0;
		}
	}
}