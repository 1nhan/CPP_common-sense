/************************************************************************
*
*	8
	정수를 여러 개 입력받아 저장한 후, 처음 N개의 정수의 합을 계산하는 
	프로그램을 작성하시오. 먼저 N을 입력받고, 
	정수들을 벡터(vector)에 저장한 후, 처음 N개의 값을 합산하시오.
	예:

	```코드
	Please enter the number of values you want to sum : 3
	Please enter some integers(press ’ | ’ to stop) : 12 23 13 24 15 |
	The sum of the first 3 numbers(12 23 13) is 48
	```

	모든 입력을 처리할 수 있도록 하시오.예를 들어,
	벡터에 저장된 값보다 더 많은 수를 합산하려고 할 경우 
	오류 메시지를 출력하시오.

	9
	이전 연습문제의 프로그램을 수정하여, 결과가 int로 표현될 수 없는 경우 
	오류를 출력하도록 하시오.

	10
	이전 연습문제의 프로그램을 수정하여 int 대신 double을 사용하시오. 
	또한, 인접한 값들 간의 차이를 담은 double 벡터를 생성하고, 
	그 차이 벡터를 출력하시오.
*
*************************************************************************/
#include<algorithm>
import std;
using namespace std;
//2'147'483'647

void bug_outofrange()
{
	cout << "범위를 벗어난 입력입니다." << '\n';
}

/* E4_09 int로 표현될 수 없는 경우 */
int bug_not_int(int n)
{	
	if (n > 2'147'483'647 || n < -2'147'483'648) 
	{ cout << "int의 범위를 벗어납니다." << '\n'; return 0; }
	return n;
}

int main(void)
{
	int N = -1, i = -1, sum = 0;
	//Please enter the number of values you want to sum : 3
	cout << "Please enter the number of values you want to sum : ";
	
	cin >> N;
	bug_not_int(N);


	vector<int>number_group;
	cout<< '\n';

	cout << "Please enter some integers(press ’ | ’ to stop) : ";
	while (cin >> i){
		bug_not_int(i);
		cout << "Please enter some integers(press ’ | ’ to stop) : ";
		//Please enter some integers(press ’ | ’ to stop) : 12 23 13 24 15 |
		number_group.push_back(i);
	}
	cout<< '\n';

	//The sum of the first 3 numbers(12 23 13) is 48
	cout << "The sum of the first " << N << " numbers(";

	for(int x=0; x<N;++x)
	{
		if (x >= N) { bug_outofrange(); break; }
		cout<<bug_not_int(number_group[x])<<' ';
		sum += number_group[x];
	}
	
	cout<<") is "<<bug_not_int(sum)<<'\n';
}