/************************************************************************
*
*	12
	“Bulls and Cows”라는 간단한 추측 게임을 구현하시오.
	프로그램은 0~9 사이의 서로 다른 네 개의 정수를 벡터에 저장하고, 
	사용자는 반복적으로 추측하여 그 숫자를 맞춰야 한다.예를 들어, 
	정답이 1234이고 사용자가 1359를 입력하면, 출력은 “1 bull and 1 cow”가 되어야 한다.
	추측은 네 개의 숫자를 정확한 순서로 맞출 때까지 계속된다.

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

#include<algorithm>
import std;
using namespace std;

/* 게임의 룰 4개의 숫자만을 rule_is_four로 정의 */
constexpr int rule_is_four = 4;	

/*벡터 size에 대한 유효성 검사*/
bool Is_Size_Four(vector<int> computer_para_input, vector<int> user_para_input)
{
	if (computer_para_input.size() > 4 || user_para_input.size() > 4)
	{
		cout << "인덱스 범위를 초과했습니다. 프로그램을 재시작해주세요." << '\n';
		return false;
	}
	return true;
}

/*Bulls 함수*/
int Bulls(vector<int> computer_para_input, vector<int> user_para_input)
{
	int bull = 0;
	Is_Size_Four(computer_para_input, user_para_input);
	for (int x = 0; x < rule_is_four; ++x)
		if (computer_para_input[x] == user_para_input[x]) ++bull;
	return bull;
}
/*Cows 함수*/
int Cows(vector<int> computer_para_input, vector<int> user_para_input)
{
	int cow = 0;
	Is_Size_Four(computer_para_input, user_para_input);
	if (computer_para_input.size() > 4 || user_para_input.size() > 4) return 0;
	for (int x = 0; x < rule_is_four; ++x)
		for (int y = 0; y < rule_is_four; ++y)
			if (computer_para_input[x] != user_para_input[x] &&
				computer_para_input[x] == user_para_input[y]) ++cow;
	return cow;
}
/*Bulls and Cows 함수 끝*/

int main(void)
{
	cout << "“Bulls and Cows”" << '\n';

	/*균등분포를 이용한 컴퓨터벡터 vector 선언 */
	default_random_engine engine;				//기본 난수 생성기 engine객체
	uniform_int_distribution<int> dist(0, 9);	//0-9까지 균등하게 분포되게 반환
	vector<int>computer_vector;					//변수 computer_input 선언

	/* 유저벡터 vector 선언 */
	int user_input = -1;
	vector<int>user_vector;
	
	while(computer_vector.size()<=4)				//백터에 기본난수생성기를 이용해 (0-9까지)균등하게 담기.
	{	
		computer_vector.push_back(dist(engine));
	}

	for (int x = 0; x < rule_is_four; ++x)
	{
		cout << computer_vector[x];
	}
	cout << '\n';
	/* user_input입력후 벡터 user_vector에 저장*/
	cout << "네개의 수를 입력하세요" << '\n';
	while(cin>> user_input)
	{
		user_vector.push_back(user_input);
		/*user_vector의 크기가 4일때부터 비교*/
		if (user_vector.size() == 4)
		{
			if (Bulls(computer_vector, user_vector) != 4)
			{
				cout << "“"		<< Bulls(computer_vector, user_vector)
				<< "bull and "	<< Cows(computer_vector, user_vector)
				<< "cow”" << '\n';
				user_vector.clear();
			}
			else { cout <<"4Bulls. GAME OVER" << '\n'; return 0; }
		}
	}
}

/* 1차시도 실패.

1. 중첩 반복문 속 y가 증가하지 않고 x가 증가하게끔 이상한 반복문을 만듬.(논리 오류) 
2. user_input이 push_back하니 한번만 반복되고 두번째부터는 아마도 user_input 5,6,7,8로 
증가되어 반복문이 내 생각처럼 반복이 안됨. (논리 오류)

*/
