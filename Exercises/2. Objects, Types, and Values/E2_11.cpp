/****************************************************************************
*
*	사용자에게 다음 동전의 개수를 각각 입력받는 프로그램을 작성하시오 :
*	penny(1센트), nickel(5센트), dime(10센트)
*	quarter(25센트), half dollar(50센트), one - dollar coin(100센트)
*	각 동전에 대해 별도로 질문하십시오.
*	예: "How many pennies do you have?" 
*	출력 예시 : 코드
*	You have 23 pennies.
*	You have 17 nickels.
*	You have 14 dimes.
*	You have 7 quarters.
*	You have 3 half dollars.
*	The value of all of your coins is 573 cents.
*	개선 사항 :
*	동전이 1개일 경우 문법적으로 올바른 단수 표현을 사용하십시오.
*	예 : "1 dime" (아닌 "1 dimes") 
*	총액은 달러와 센트 단위로 변환하여 출력하십시오.
*	예 : 573 cents → $5.73	
*
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	int penney = -1, nickel = -1, dime = -1, 
		quarter = -1, half_dollar = -1, dollar = -1,
		sum = 0;
	/*입력*/
	cout << "How many pennies do you have?" << '\n';
	cin >> penney;
	cout << "How many nickels do you have?" << '\n';
	cin >> nickel;
	cout << "How many dimes do you have?" << '\n';
	cin >> dime;
	cout << "How many quarters do you have?" << '\n';
	cin >> quarter;
	cout << "How many half_dollars do you have?" << '\n';
	cin >> half_dollar;
	cout << "How many dollars do you have?" << '\n';
	cin >> dollar;
	/*입력 끝*/

	/*출력*/
	if (penney > 1)cout << "You have " << penney << " pennies." << '\n';
	else if(penney == 1)cout<< "You have " << penney << " penney." << '\n';

	if (nickel > 1)cout << "You have " << nickel << " nickels." << '\n';
	else if (nickel == 1)cout << "You have " << nickel << " nickel." << '\n';

	if (dime > 1)cout << "You have " << dime << " dimes." << '\n';
	else if (dime == 1)cout << "You have " << dime << " dime." << '\n';

	if (quarter > 1)cout << "You have " << quarter << " quarters." << '\n';
	else if (quarter == 1)cout << "You have " << quarter << " quarter." << '\n';

	if (half_dollar > 1)cout << "You have " << half_dollar << " half dollars." << '\n';
	else if (half_dollar == 1)cout << "You have " << half_dollar << " half dollar." << '\n';

	if (dollar > 1)cout << "You have " << dollar << " dollars." << '\n';
	else if (dollar == 1)cout << "You have " << dollar << " dollar." << '\n';

	/*sum 계산*/
	sum = penney+nickel*5+dime*10+quarter*25+half_dollar*50+dollar*100;
	/*센트&달러*/
	cout << "The value of all of your coins is "<<sum<<" cents." << '\n';
	cout << "The value of all of your coins is "<<(double)sum/100<<" dollars." << '\n';
	/*센트&달러 끝*//*sum 계산 끝*//*출력 끝*/

	return 0;
}