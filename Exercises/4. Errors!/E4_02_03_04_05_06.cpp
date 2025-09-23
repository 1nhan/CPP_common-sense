/************************************************************************
*	
*	E4_02
*	다음 프로그램은 섭씨(Celsius) 온도를 입력받아 켈빈(Kelvin)으로 변환한다. 
*	이 코드에는 여러 오류가 있다. 오류를 찾아 나열하고, 코드를 수정하시오.
*
*	```cpp
*	double ctok(double c) // 섭씨를 켈빈으로 변환
*	{
*	int k = c + 273.25;
*	return int
*	}
*	int main()
*	{
*	double c = 0; // 입력 변수 선언
*	cin >> d; // 온도 입력
*	double k = ctok("c"); // 온도 변환
*	Cout << k << '/n' ; // 온도 출력
*	}
*	```
*	
*	E4_03
*	절대 영도(absolute zero)는 도달 가능한 가장 낮은 온도로, 
*	-273.15°C 또는 0K이다. 
*	위 프로그램은 수정하더라도 이보다 낮은 온도를 입력받으면 
*	잘못된 결과를 출력한다. 
*	main() 함수에 온도가 -273.15°C보다 낮을 경우 오류를 발생시키는 
*	검사를 추가하시오.
*
*	E4_04
*	연습문제 3을 다시 수행하되, 
*	이번에는 오류 처리를 ctok() 함수 내부에서 수행하시오.
*
*	E4_05
*	켈빈(Kelvin)을 섭씨(Celsius)로도 변환할 수 있도록 하시오.
*
*	E4_06
*	섭씨와 화씨(Fahrenheit) 간의 변환 프로그램을 작성하시오. 
*	결과가 타당한지 추정(estimation)을 활용하여 확인하시오.
*
*************************************************************************/
import std;
using namespace std;

/*E4_03*/
void error(double err)
{
	cout << "error 발생" << '\n';
}

double ctok(double c) // 섭씨를 켈빈으로 변환
{
	//int k = c + 273.25;
	
	/*E4_04*/
	double k = c + 273.25;
	
	if (k <= 0) { error(k); return 0; }
	//return int
	return k;	
}

double ktoc(double k)// 켈빈을 섭씨로 변환
{
	double c = k - 273.25;
	if (c < -273.15) { error(c); return 0; }
	return k;
}

/*온도가 -273.15°C보다 낮을 경우 오류를 발생시키는 검사를 추가하시오.*/
int main()
{
	double c = 0; // 섭씨 선언
	double k = 0; // 켈빈 선언
	//cin >> d; // 온도 입력
	cout << "온도를 입력(섭씨(Celsius),켈빈(Kelvin)) >>" << '\n';
	cin >> c >> k; // 온도 입력
	
	/*E4_03*/
	//if (c < -273.15)
	//	error(c);

	//double k = ctok("c"); // 온도 변환
	cout << "켈빈을 섭씨로 변환" <<ktoc(k) << '\n' << '\n'; // ktoc로 온도 출력
	cout << "섭씨를 켈빈으로 변환" <<ctok(c) << '\n'; // ctok로 온도 출력
}