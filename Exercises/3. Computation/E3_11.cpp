/************************************************************************
*
*	“가위, 바위, 보” 게임을 구현하세요. 게임을 모른다면 웹에서 검색해보세요. 
*	프로그래머에게는 조사(research)도 중요한 작업입니다. 
*	이 문제는 switch 문을 사용하여 해결하세요. 
*	컴퓨터는 무작위로 가위, 바위, 보 중 하나를 선택해야 합니다. 
*	진짜 난수는 어렵기 때문에, 미리 값들을 담은 벡터를 만들어 사용하세요. 
*	벡터를 프로그램에 고정하면 항상 같은 게임이 되므로, 
*	사용자에게 값을 입력받는 방식도 고려하세요. 
*	사용자가 컴퓨터의 다음 선택을 예측하기 어렵도록 다양한 변형을 시도해보세요.
*
*************************************************************************/
#include <algorithm>
import std;
using namespace std;

int main(void)
{
	vector<string>card = { "가위!","바위!","보!" };
	int user_input = -1;
	int computer_input = -1;

	for (int round = 0;; ++round)
	{
		/*사용자에게 입력*/
		cout << "1(가위!), 2(바위!), 3(보!)\n";
		cin >> user_input;

		/*유효성 검사*/
		if (user_input < 1 || user_input>3)
		{
			cout << "reject the game\n";
			continue;
		}

		/*컴퓨터의 다음 선택*/
		if (round % 2 == 0) computer_input = (round + user_input )% 3;
		else computer_input = round % 3;

		/*스위치문을 사용*/
		switch (user_input)
		{
				/*유저가 가위를 낼때*/
			case 1:cout << "유저는 " << card[user_input - 1] << "를 냈다.\n"; 
				if (card[computer_input] == card[2])
				{
					cout <<"컴퓨터는 "<<card[computer_input]<<"을 냈다." << '\n';
					cout << "이겼다.\n";
				}
				else if (card[computer_input] == card[1])
				{
					cout <<"컴퓨터는 "<<card[computer_input]<<"을 냈다." << '\n';
					cout << "졌다.\n";
				}
				else
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "비겼다.\n";
				}
				break;

				/*유저가 바위를 낼때*/
			case 2:cout << "유저는 " << card[user_input - 1] << "를 냈다.\n"; 
				if (card[computer_input] == card[0])
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "이겼다.\n";
				}
				else if (card[computer_input] == card[2])
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "졌다.\n";
				}
				else
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "비겼다.\n";
				}
				break;
			
				/*유저가 보를 낼때*/
			case 3:cout << "유저는 " << card[user_input - 1] << "를 냈다.\n"; 
				if (card[computer_input] == card[1])
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "이겼다.\n";
				}
				else if (card[computer_input] == card[0])
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "졌다.\n";
				}
				else
				{
					cout << "컴퓨터는 " << card[computer_input] << "을 냈다." << '\n';
					cout << "비겼다.\n";
				}
				break;
		}
	}
	return 0;
}