/****************************************************
*
	제4장 연습문제 12번의 “Bulls and Cows” 게임을 
	숫자 네 자리 대신 문자 네 개를 사용하도록 수정하라.
*
*****************************************************/

import std;
using namespace std;

auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}

constexpr int rule = 4;

class Get_Stream {
public:
	auto get() -> char;
private:
};

auto Get_Stream::get() ->char{

	char ch = 0;
	cin >> ch;
	switch (ch) {
	case '0':case '1':case '2':case '3':case '4':
	case '5':case '6':case '7':case '8':case '9':
		return ch;
	default:
		cout << "숫자만 입력 가능합니다." << '\n';
	}
}

Get_Stream gs;

// 프롬프트들
auto to_be_continue() -> bool
{//게임을 계속할지 묻는 프롬프트
	cout << "Do you want to be continue?(y or n)" << '\n';
	char answer = 0;
	cin >> answer;
	switch (answer) {
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		error("Reject!");
	}
}
auto prompt() -> void {
	cout << "“Bulls and Cows”" << '\n';
	cout << "you can only input 0-9" << '\n';
}

// 랜덤 숫자 생성기
auto generate_random() -> char
{
	const vector<char>rule_number = 
	{ '1','2','3','4','5','6','7','8','9','0' };
	random_device rd;
	default_random_engine engine(rd());
	uniform_int_distribution<int> dist(0, rule_number.size() - 1);
	char number = rule_number[dist(engine)];

	/*확인용
	cout << "generate_random >>" << number << '\n';
	*/
	return number;
}

// 컴퓨터 숫자 생성
auto make_number_computer() -> string
{
	string four_number = "";

	while (four_number.size() < 4) {
		char num = generate_random();
		bool unique = true;

		for (int j = 0; j < four_number.size(); ++j)
			if (four_number[j] == num) {
				unique = false;
				break;
			}
		if (unique)
			four_number += num;
	}
	return four_number;
	/* 확인용
	*/
	cout << four_number << ' ';

}
//유저 숫자 생성
auto make_number_for_user() -> string
{
	string four_number = "";

	while (four_number.size() < 4) {
		char num = 0;
		//.. 입력
		num = gs.get();
		bool unique = true;

		for (int j = 0; j < four_number.size(); ++j)
			if (four_number[j] == num) {
				unique = false;
				break;
			}
		if (unique)
			four_number += num;
	}
	/* 확인용
	*/
	cout << four_number << ' ';

	return four_number;
}

/*
*/
auto bull_cow() -> void
{// 숫자가 존재하고 위치가 다르면 cow,
 // 숫자가 존재하고 위치도 같으면 bull
	string computer = make_number_computer();
	cout << computer << '\n';
	string user = make_number_for_user();
	cout << user<< '\n';
	int cow = 0, bull = 0;
	while (true)
	{
		prompt();
		cow = 0, bull = 0;
		for (int i = 0; i < computer.size(); ++i) {
			if (computer[i] == user[i])
				++bull;
		}//is bull?
		for (int i = 0; i < computer.size(); ++i) {
			for (int j = 0; j <= i; ++j)
				if ((i != j) && (computer[i] == user[j]))
					++cow;
		}
		cout << "“" << bull << " bull and " << cow << " cow”" << '\n';
		if (bull == 4) {
			cout << "Cong!!! lol! 4 bull!!" << '\n';
			if (!to_be_continue())
				break;
		}
		user = make_number_for_user();
	}
}


auto main() -> int
{
	bull_cow();
}
