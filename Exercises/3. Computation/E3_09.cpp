/************************************************************************
*
*	체스를 발명한 사람이 황제에게 보상을 요구한 고전 이야기가 있습니다. 
*	첫 번째 칸에는 쌀 한 톨, 두 번째에는 두 톨, 세 번째에는 네 톨… 
*	이렇게 64칸까지 매번 두 배로 늘어납니다. 
*	이 이야기를 바탕으로, 다음을 계산하는 프로그램을 작성하세요:
*	최소 1,000 톨을 받기 위해 필요한 칸 수
*	최소 1,000,000 톨을 받기 위해 필요한 칸 수
*	최소 1,000,000,000 톨을 받기 위해 필요한 칸 수 반복문을 사용하고, 
*	현재 칸 번호, 해당 칸의 쌀 수, 누적 쌀 수를 추적하는 변수를 사용하세요. 
*	각 반복마다 변수 값을 출력하여 진행 상황을 확인하세요.
*
*************************************************************************/
#include <algorithm>
import std;
using namespace std;
int main(void)
{
	vector<int>room_int(64);
	vector<double>room_double(64);
	
	/*첫 번째 칸에는 쌀 한 톨*/
	const int grain = 1;
	room_int[0] = grain;
	room_double[0] = grain;
	double room_sum = 0;

	/*분기 플래그*/
	bool grain_k = false;
	bool grain_m = false;
	bool grain_b = false;

	/*현재 칸 번호, 해당 칸의 쌀 수*/
	for (int x = 0 ; x<room_int.size(); ++x)
	{
		if (x != 0) {	room_int[x]		= (2 * room_int		[x-1]);
						room_double[x]	= (2 * room_double	[x - 1]); }
		cout << x + 1 << "칸에 쌀: " << room_int[x] << "톨(int) \t";
		cout << x + 1 << "칸에 쌀: " << room_double[x] << "톨(double)" << '\n';
	}

	/*누적 쌀 수, 최소 필요한 칸 수*/
	for (int x = 0; x < room_double.size(); ++x)
	{
		room_sum += room_double[x];
		cout << x + 1 << "칸까지 쌀: " << room_sum << "톨(sum)\n";

		/*최소 1, 000 톨을 받기 위해 필요한 칸 수*/
		if (!grain_k && room_sum >= 1'000)
		{
			cout << "최소 1, 000 톨을 받기 위해 필요한 칸 수\t"
				<< x+1 << '\n'; grain_k = true;
		}
		/*최소 1, 000, 000 톨을 받기 위해 필요한 칸 수*/
		if (!grain_m && room_sum >= 1'000'000)
		{
			cout << "최소 1, 000, 000 톨을 받기 위해 필요한 칸 수\t"
				<< x+1 << '\n'; grain_m = true;
		}
		/*최소 1, 000, 000, 000 톨을 받기 위해 필요한 칸 수*/
		if (!grain_b && room_sum > 1'000'000'000)
		{
			cout << "최소 1, 000, 000, 000 톨을 받기 위해 필요한 칸 수\t"
				<< x+1 << '\n'; grain_b = true;
		}
	}
	return 0;
}