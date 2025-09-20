/************************************************************************
*
*	������ �߾Ӱ�(median)�� 
*	���������� �� �տ� ���� ����� ������ �ڿ� ���� ����� ������ ��Ȯ�� ���� ����
*	���� �����Ѵٸ�, 
    int main()
    // ��� �� �߾Ӱ� ���
    {
        vector<double> temps;
        for (double temp; cin >> temp;)
            temps.push_back(temp);

        // ��� ���
        double sum = 0;
        for (double x : temps)
            sum += x;
        cout << "Average temperature: " << sum / temps.size() << '\n';

        // �߾Ӱ� ���
        ranges::sort(temps); // ����
        cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
    }�� ���α׷��� �����Ͽ� �׻� �߾Ӱ��� ����ϵ��� �ϼ���.
*	��Ʈ: �߾Ӱ��� ������ ����� �ʿ�� �����ϴ�.
*
*************************************************************************/
import std;
using namespace std;
#include<algorithm>
int main(void)
// ��� �� �߾Ӱ� ���
{
    /*�Է�*/
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    /*�Է� ��*/

    // ��� ���
    double sum = 0;
    for (double x : temps)
        sum += x;
    cout << "Average temperature: " << sum / temps.size() << '\n';

    /*�߾Ӱ�*/
    ranges::sort(temps); // ����
    if (temps.size() % 2 == 1) cout << 
        temps[temps.size()/2]<< '\n';
    else cout <<
        ((temps[temps.size()/2-1])+(temps[temps.size()/2]))/2 
        << '\n';
    /*
        �߾Ӱ� : temps.size()�� Ȧ���̸� (n+1)/2
                -> temps[temps.size()/2]��°�� �߾Ӱ�.
                temps.size()�� ¦���̸� (n/2 + ((n+1)/2))/2
                -> temps[temps.size()/2-1]+temps[temps.size()/2]����� �߾Ӱ�.
                ��.
    */
    return 0;
}