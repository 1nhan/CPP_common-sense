// Date_Main.cpp
import std;
import Date;
using namespace std;

int main() {
    Date today(2025, 10, 2);  // 2025�� 10�� 2��

    std::cout << "���� ��¥: "
        << today.year() << "-"
        << today.month() << "-"
        << today.day() << std::endl;

    today.add_day(5);  // 5�� �߰�

    std::cout << "5�� �� ��¥: "
        << today.year() << "-"
        << today.month() << "-"
        << today.day() << std::endl;

    return 0;
}