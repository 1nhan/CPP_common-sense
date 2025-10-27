// Date.ixx — 모듈 인터페이스 파일
export module Date;

export class Date04 {
    int y, m, d;
public:
    Date04(int y, int m, int d);
    void add_day(int n);
    int year() const { return y; }
    int month() const { return m; }
    int day() const { return d; }
};