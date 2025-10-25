/**************************************************************************************
*
*	12
	��Bulls and Cows����� ������ ���� ������ �����Ͻÿ�.
	���α׷��� 0~9 ������ ���� �ٸ� �� ���� ������ ���Ϳ� �����ϰ�, 
	����ڴ� �ݺ������� �����Ͽ� �� ���ڸ� ����� �Ѵ�.���� ���, 
	������ 1234�̰� ����ڰ� 1359�� �Է��ϸ�, ����� ��1 bull and 1 cow���� �Ǿ�� �Ѵ�.
	������ �� ���� ���ڸ� ��Ȯ�� ������ ���� ������ ��ӵȴ�.
***************************************************************************************/
import std;

using namespace std;

auto error(const string& msg) -> void
{
	throw runtime_error(msg);
}

constexpr int rule = 4;

auto prompt() -> void {
	cout << "��Bulls and Cows��" << '\n';
	cout << "you can only input 0-9" << '\n';
}

auto make_number_for_computer() -> vector<int>{
	vector<int>four_number;
	// ..four_number�� ä���
	default_random_engine engine;
	uniform_int_distribution dist(0,9);

	while (four_number.size() < rule) {// ����� �꿡 �����Ҷ����� �ݺ�
		int num = dist(engine);
		bool unique = true;// �ߺ� �Ұ� �÷���
		for (int i = 0; i < four_number.size(); ++i) {
			if (four_number[i] == num) {
				unique = false;
				break;
			}
		}
		if (unique)//�ߺ� �ƴҽ� push_back
			four_number.push_back(num);
	}

	/* ���(Ȯ�ο�)
	*/
	for (int i = 0; i < four_number.size(); ++i) {
		cout << four_number[i] << ' ';
	}
	cout << '\n';
	return four_number;
}

auto make_number_for_user() -> vector<int>{
	vector<int>four_number;
	// ..four_number�� ä���
	int numb = 0;
	bool unique = true;
	while (four_number.size() < rule) {
		cin >> numb;
		for(int i = 0; i< four_number.size();++i)
			if (four_number[i] == numb) {
				unique = false;
				cout << "�ߺ��� �����Դϴ�." << '\n';
				break;
			}
		if (unique)
			four_number.push_back(numb);
	}
	return four_number;
}

auto bull_cow() -> void
{// ���ڰ� �����ϰ� ��ġ�� �ٸ��� cow,
 // ���ڰ� �����ϰ� ��ġ�� ������ bull
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
		cout << "��" << bull << " bull and " << cow << " cow��" << '\n';
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
	�� ������ ������ �ϵ��ڵ��Ǿ� �־� �ݺ� �÷��̰� ��ƴ�. 
	���α׷��� �����Ͽ� ����ڰ� �ݺ������� �÷����� �� �ֵ��� �ϰ�, 
	�� ���Ӹ��� ���ο� �� ���� ���ڰ� �����ǵ��� �Ͻÿ�. 
	PPP_support ����� random_int(0,9)�� �� �� ȣ���Ͽ� ������ �����Ͻÿ�. 
	���α׷��� �ݺ� ������ ������ ���� ���� �������� �����Ǵ� ���� ���Ϸ���, 
	����ڿ��� �ƹ� ���ڳ� �Է¹ް� �̸� seed(n) �Լ��� �����Ͽ� �õ带 �����Ͻÿ�. 
	�� n�� �õ�(seed)�� �Ҹ���, ���� �ٸ� �õ�� ���� �ٸ� ���� �������� �����Ѵ�.
* 
*************************************************************************/