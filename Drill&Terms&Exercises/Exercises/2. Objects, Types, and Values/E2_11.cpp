/****************************************************************************
*
*	����ڿ��� ���� ������ ������ ���� �Է¹޴� ���α׷��� �ۼ��Ͻÿ� :
*	penny(1��Ʈ), nickel(5��Ʈ), dime(10��Ʈ)
*	quarter(25��Ʈ), half dollar(50��Ʈ), one - dollar coin(100��Ʈ)
*	�� ������ ���� ������ �����Ͻʽÿ�.
*	��: "How many pennies do you have?" 
*	��� ���� : �ڵ�
*	You have 23 pennies.
*	You have 17 nickels.
*	You have 14 dimes.
*	You have 7 quarters.
*	You have 3 half dollars.
*	The value of all of your coins is 573 cents.
*	���� ���� :
*	������ 1���� ��� ���������� �ùٸ� �ܼ� ǥ���� ����Ͻʽÿ�.
*	�� : "1 dime" (�ƴ� "1 dimes") 
*	�Ѿ��� �޷��� ��Ʈ ������ ��ȯ�Ͽ� ����Ͻʽÿ�.
*	�� : 573 cents �� $5.73	
*
*****************************************************************************/

import std;
using namespace std;

int main(void)
{
	int penney = -1, nickel = -1, dime = -1, 
		quarter = -1, half_dollar = -1, dollar = -1,
		sum = 0;
	/*�Է�*/
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
	/*�Է� ��*/

	/*���*/
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

	/*sum ���*/
	sum = penney+nickel*5+dime*10+quarter*25+half_dollar*50+dollar*100;
	/*��Ʈ&�޷�*/
	cout << "The value of all of your coins is "<<sum<<" cents." << '\n';
	cout << "The value of all of your coins is "<<(double)sum/100<<" dollars." << '\n';
	/*��Ʈ&�޷� ��*//*sum ��� ��*//*��� ��*/

	return 0;
}