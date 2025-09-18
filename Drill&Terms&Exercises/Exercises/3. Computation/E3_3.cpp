/************************************************************************
*
*	수열의 중앙값(median)을 
*	“수열에서 그 앞에 오는 요소의 개수와 뒤에 오는 요소의 개수가 정확히 같은 값”
*	으로 정의한다면, 
    int main()
    // 평균 및 중앙값 계산
    {
        vector<double> temps;
        for (double temp; cin >> temp;)
            temps.push_back(temp);

        // 평균 계산
        double sum = 0;
        for (double x : temps)
            sum += x;
        cout << "Average temperature: " << sum / temps.size() << '\n';

        // 중앙값 계산
        ranges::sort(temps); // 정렬
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }의 프로그램을 수정하여 항상 중앙값을 출력하도록 하세요.
*	힌트: 중앙값은 수열의 요소일 필요는 없습니다.
*
*************************************************************************/
import std;
using namespace std;
#include<algorithm>
int main(void)
// 평균 및 중앙값 계산
{
    /*입력*/
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    /*입력 끝*/

    // 평균 계산
    double sum = 0;
    for (double x : temps)
        sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    /*중앙값*/
    ranges::sort(temps); // 정렬
    if (temps.size() % 2 == 1) cout << 
        temps[temps.size()/2]<< '\n';
    else cout <<
        ((temps[temps.size()/2-1])+(temps[temps.size()/2]))/2 
        << '\n';
    /*
        중앙값 : temps.size()이 홀수이면 (n+1)/2
                -> temps[temps.size()/2]번째가 중앙값.
                temps.size()이 짝수이면 (n/2 + ((n+1)/2))/2
                -> temps[temps.size()/2-1]+temps[temps.size()/2]평균이 중앙값.
                끝.
    */
    return 0;
}