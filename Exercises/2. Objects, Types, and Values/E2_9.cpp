/****************************************************************************
*
*	����ڰ� ö�ڷ� �Է��� ���� �̸�(��: "zero", "two")�� ����(0, 2 ��)�� 
*	��ȯ�ϴ� ���α׷��� �ۼ��Ͻÿ�.��ȯ ����� "zero"���� "four"����, 
*	�� 0~4�� �ش��ϴ� ���� �̸��� ó���մϴ�.
*	����ڰ� "stupid computer!"ó�� ���ǵ��� ���� �Է��� �ϸ�, 
*	"not a number I know"��� �޽����� ����ؾ� �մϴ�.
*
*****************************************************************************/
import std;
using namespace std;

int main(void)
{
	string val;

	cout << "press number to english spell(zero-four)" << '\n';
	cin >> val;
	if (val == "zero")			cout << 0 << " is " << val << '\n';
	else if (val == "one")		cout << 1 << " is " << val << '\n';
	else if (val == "two")		cout << 2 << " is " << val << '\n';
	else if (val == "three")	cout << 3 << " is " << val << '\n';
	else if (val == "four")		cout << 4 << " is " << val << '\n';
	else						cout << "not a number I know" << '\n';

	return 0;
}