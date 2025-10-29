#include <fstream>
#include <string>
using namespace std;

// 파일 이름 생성 함수
auto make_filename(int i) -> string {
    return string("E09_") + ((i < 10) ? "0" : "") + to_string(i) + ".cpp";
}

// 파일 내용 작성 함수
auto write_file_content(ofstream& file, int i) -> void {
    file << "// E09_" << (i < 10 ? "0" : "") << i << ".cpp\n";
    file << "import std;\nusing namespace std;\n\n";
    file << "/************************************************************************\n\n";
    file << "************************************************************************/\n";
}

// 파일 생성 함수
auto create_file(int i) -> void {
    string filename = make_filename(i);
    ofstream file(filename);
    if (file.is_open()) {
        write_file_content(file, i);
        file.close();
    }
}

// 전체 실행 함수
auto generate_all_files() -> void {
    for (int i = 1; i <= 26; ++i) {
        create_file(i);
    }
}

// 메인 함수
auto main() -> int {
    generate_all_files();
    return 0;
}