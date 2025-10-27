//date04.cpp
module date04;

date04::date04(int yy, int mm, int dd)
	:y{ yy }, m{ mm }, d{ dd }{ }

void date04::add_day(int dd) { d += dd; }
