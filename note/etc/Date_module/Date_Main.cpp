// Date_Main.cpp
import std;
import Date;
using namespace std;

int main() {
    Date today(2025, 10, 2);  // 2025년 10월 2일

    std::cout << "오늘 날짜: "
        << today.year() << "-"
        << today.month() << "-"
        << today.day() << std::endl;

    today.add_day(5);  // 5일 추가

    std::cout << "5일 후 날짜: "
        << today.year() << "-"
        << today.month() << "-"
        << today.day() << std::endl;

    return 0;
}