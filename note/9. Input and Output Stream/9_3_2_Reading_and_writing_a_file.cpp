
import std;
using namespace std;

auto error(const string& msg, const string& name)
{
	throw runtime_error(msg + " " + name);
}
auto error(const string& msg)
{
	throw runtime_error(msg);
}

auto write_name() -> string
{
	string name = "";
	cin >> name;
	return name;
}
struct Reading {
	Reading() :hour{ -1 }, temperature{ -700 } {}
	Reading(double d, int n) :temperature{ d }, hour{ n } {};
	Reading(int n, double d) :hour{ n } ,temperature{ d }{};
	double temperature;
	int hour;
};

auto make_iname() -> ifstream
{
	cout << '\n';
	string iname = write_name();
	ifstream ist{ iname };
	if (!ist)
		error("cant read this file", iname);
	return ist;
}
auto make_oname() -> ofstream
{
	cout << '\n';
	string oname = write_name();
	ofstream ost{ oname };
	if (!ost)
		error("cant write this file", oname);

	return ost;
}
auto read_data() -> void 
{
	vector<Reading> temps;
	Reading data;
	ifstream ist = make_iname();
	data.hour = -1;
	data.temperature = -700;

	while (ist >> data.hour >> data.temperature) {
		if (data.hour < 0 && data.hour>23)
			error("hour is out of range");
		temps.push_back(Reading{ data.hour,data.temperature });
	}

	for (Reading x : temps)
		cout << "( " << data.hour << " : " << data.temperature << " )" << '\n';
}

auto main() -> int
{
	read_data();
}