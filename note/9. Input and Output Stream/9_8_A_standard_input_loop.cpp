/*A standard input loop

다음은 istream 타입의 ist를 가정한 일반적인 입력 전략이다:

    for (My_type var; ist >> var; ) {
        // var의 유효성 검사
        // var에 대해 필요한 작업 수행
    }

    if (ist.bad())
        error("bad input stream");

    if (ist.fail()) {
        // 종료 문자가 허용된 경우인지 확인
    }
    // 계속 진행: 파일 끝 또는 종료 문자 도달
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