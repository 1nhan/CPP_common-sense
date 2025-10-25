/************************************************************************
*
	이차방정식(quadratic equation)은 a* x² + b * x + c = 0의 형태를 갖는다.
	이를 풀기 위해서는 근의 공식(quadratic formula)을 사용한다:
	x = (-b ± √(b² - 4ac)) / 2a 
	단, b² - 4ac가 0보다 작으면 실근(real root)이 존재하지 않으므로 
	계산에 실패한다.이차방정식의 해를 계산하는 프로그램을 작성하시오.
	a, b, c를 입력받아 근을 출력하는 함수를 작성하고, 
	실근이 없을 경우 메시지를 출력하시오.
	결과가 타당한지 어떻게 확인할 수 있는가 ? 정확성을 검증할 수 있는가 ?
*
*************************************************************************/

#include <cmath>
#include<iostream>
using namespace std;

void no_real_root()
{
	cout <<"b² - 4ac가 0보다 작으면 실근(real root)이 존재하지 않습니다." << '\n';
}
double quadratic(double a, double b, double c)
{
	double d = b * b - (4 * a * c);
	if (d < 0) { no_real_root(); return 0; }
	else if (d == 0) {
		double x = -((b) / (2 * a));
		cout << "x = " << x << '\n';

		/*정확성 검증*/
		double check = a * x * x + b * x + c;
		if (check == 0) cout << "정확성 검증이 완료되었습니다." << '\n';
	}
	else {
		double x1 = ((-b + sqrt(d)) / (2 * a));
		double x2 = ((-b - sqrt(d)) / (2 * a));
		cout << "x1 = " << x1 << '\n' << "x2 = " << x2 << '\n';
		
		/*정확성 검증*/
		double check1 = a * x1 * x1 + b * x1 + c;
		if (check1 == 0) cout << "x1에 대한 정확성 검증이 완료되었습니다." << '\n';
		double check2 = a * x2 * x2 + b * x2 + c;
		if (check2 == 0) cout << "x2에 대한 정확성 검증이 완료되었습니다." << '\n';
	}
}

int main(void)
{
	double vala = -1, valb = -1, valc = -1;
	cout << "a, b, c를 입력해주세요." << '\n';
	cin >> vala >> valb >> valc;
	if (vala == 0) { cout << "2차방정식이 아닙니다." << '\n'; return 0; }
	quadratic(vala, valb, valc);
	
return 0;
}