/************************************************************************
*
*	1부터 100 사이의 모든 소수(prime number)를 찾는 프로그램을 작성하세요. 
*	방법: 소수인지 확인하는 함수를 작성하고, 
*	소수들을 담은 벡터를 사용하여 작은 소수로 나눠지는지 검사하세요. 
*	예: primes[0]==2, primes[1]==3, primes[2]==5 등 
*	1부터 100까지 반복하면서 소수인지 확인하고, 소수는 벡터에 저장하세요. 
*	저장된 소수를 출력하는 루프도 작성하세요. 
*	결과를 기존 소수 목록과 비교하여 검증해보세요. 
*	참고: 2는 첫 번째 소수입니다.
*
*	13
*	1부터 100 사이의 모든 소수를 찾는 프로그램을 작성하세요. 
*	고전적인 방법인 “에라토스테네스의 체(Sieve of Eratosthenes)”를 사용하세요. 
*	이 방법을 모른다면 웹에서 검색해보세요. 
*	해당 방법을 사용하여 프로그램을 작성하세요.
*
*	14
*	입력값 n을 받아, 처음 n개의 소수를 찾는 프로그램을 작성하세요.
* 
*************************************************************************/

/*나중에 한번더 풀어봐야될듯*/
#include <algorithm>
import std;
using namespace std;

/*소수인지 확인하는 함수를 작성*/

bool isprime(int num)
{
	if (num < 2) return;

	for (int x = 2; x * x <= num; ++x)
		if (num % x == 0) return false;
	return true;
}

int main(void)
{
	/*소수는 벡터에 저장*/
	vector<int>prime_number;
	
	for (int num = 2; num < 100; ++num)
	{
		if (isprime(num)) prime_number.push_back(num);
	}
	
	/*출력*/
	for (int x =0; x<prime_number.size();++x)
		cout <<prime_number[x]<< ' ';
	return 0;
}