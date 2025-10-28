/*
	어떻게 해당 객체를 구분할 수 있을까요?


class Date {
    // ...
    int month() { return m; }
    // ...
private:
    int y, m, d; // 연도(year), 월(month), 일(day)
};

void f(Date d1, Date d2)
{
    cout << d1.month() << ' ' << d2.month() << '\n';
}

    Date::month()는 첫 번째 호출에서 d1.m을, 두 번째 호출에서는 d2.m을 반환합니다. 
    그런데 Date::month()의 선언에는 어떤 객체에 대해 호출되었는지를 나타내는 인수가 없습니다. 
    그렇다면 어떻게 해당 객체를 구분할 수 있을까요?

*/