import std;
using namespace std;

auto print_ostream() -> void
{
	for (char ch; cin.get(ch);) {// get()�� �ϳ��� ���ڸ� ���ڷ� �޾� �д´�. ������ �ǳ� ���� ������, 
							//>>�� ���������� istream ������ ��ȯ�ϹǷ� ��Ʈ�� ���¸� �˻��� �� �ִ�. 
		if (isspace(ch))//���� �ǳʶٱ�...
			return;
		else if (isdigit(ch))//���� �б�...
			;
		else if (isalpha(ch))//���Ĺ� �б�...
			;
	}

}

auto main() -> int
{


}