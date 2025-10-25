/**************************************************************************************
*
*	12
	“Bulls and Cows”라는 간단한 추측 게임을 구현하시오.
	프로그램은 0~9 사이의 서로 다른 네 개의 정수를 벡터에 저장하고, 
	사용자는 반복적으로 추측하여 그 숫자를 맞춰야 한다.예를 들어, 
	정답이 1234이고 사용자가 1359를 입력하면, 출력은 “1 bull and 1 cow”가 되어야 한다.
	추측은 네 개의 숫자를 정확한 순서로 맞출 때까지 계속된다.
***************************************************************************************/
import std;

using namespace std;

auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}

constexpr int rule = 4;

auto prompt() -> void {
	cout << "“Bulls and Cows”" << '\n';
	cout << "you can only input 0-9" << '\n';
}

auto make_number_for_computer() -> vector<int>{
	vector<int>four_number;
	// ..four_number를 채우기
	default_random_engine engine;
	uniform_int_distribution dist(0,9);

	while (four_number.size() < rule) {// 사이즈가 룰에 충족할때까지 반복
		int num = dist(engine);
		bool unique = true;// 중복 불가 플레그
		for (int i = 0; i < four_number.size(); ++i) {
			if (four_number[i] == num) {
				unique = false;
				break;
			}
		}
		if (unique)//중복 아닐시 push_back
			four_number.push_back(num);
	}

	/* 출력(확인용)
	*/
	for (int i = 0; i < four_number.size(); ++i) {
		cout << four_number[i] << ' ';
	}
	cout << '\n';
	return four_number;
}

auto make_number_for_user() -> vector<int>{
	vector<int>four_number;
	// ..four_number를 채우기
	int numb = 0;
	bool unique = true;
	while (four_number.size() < rule) {
		cin >> numb;
		for(int i = 0; i< four_number.size();++i)
			if (four_number[i] == numb) {
				unique = false;
				cout << "중복된 숫자입니다." << '\n';
				break;
			}
		if (unique)
			four_number.push_back(numb);
	}
	return four_number;
}

auto bull_cow() -> void
{// 숫자가 존재하고 위치가 다르면 cow,
 // 숫자가 존재하고 위치도 같으면 bull
	vector<int>computer = make_number_for_computer();
	vector<int>user = make_number_for_user();
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
			break;
		}
		user = make_number_for_user();
	}
}

auto main() -> int
{
	bull_cow();
}
/*
	13
	위 게임은 정답이 하드코딩되어 있어 반복 플레이가 어렵다. 
	프로그램을 수정하여 사용자가 반복적으로 플레이할 수 있도록 하고, 
	매 게임마다 새로운 네 개의 숫자가 생성되도록 하시오. 
	PPP_support 모듈의 random_int(0,9)를 네 번 호출하여 난수를 생성하시오. 
	프로그램을 반복 실행할 때마다 같은 숫자 시퀀스가 생성되는 것을 피하려면, 
	사용자에게 아무 숫자나 입력받고 이를 seed(n) 함수에 전달하여 시드를 설정하시오. 
	이 n은 시드(seed)라 불리며, 서로 다른 시드는 서로 다른 난수 시퀀스를 생성한다.
* 
*************************************************************************/