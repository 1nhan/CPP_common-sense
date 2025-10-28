/*A standard input loop

������ istream Ÿ���� ist�� ������ �Ϲ����� �Է� �����̴�:

    for (My_type var; ist >> var; ) {
        // var�� ��ȿ�� �˻�
        // var�� ���� �ʿ��� �۾� ����
    }

    if (ist.bad())
        error("bad input stream");

    if (ist.fail()) {
        // ���� ���ڰ� ���� ������� Ȯ��
    }
    // ��� ����: ���� �� �Ǵ� ���� ���� ����
import std;
using namespace std;

istream& operator>> (istream& is, char ch) {
    
    return is >> ch;
}

auto end_of_loop(istream& is, char terminator, const string& data) -> void
{
    if (is.fail()){
        is.clear();
        char ch = 0;
        if (is >> ch && ch = terminator)
            return; 
        error("message");
    }
}

*/