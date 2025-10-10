//date04.ixx
export module date04;

export class date04
{
public:
	date04(int yy, int mm, int dd);
	void add_day(int dd);
	int month() { return m; }
	int day() { return d; }
	int year() { return y; }
private:
	int y, m, d;
};

