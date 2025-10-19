export module error;
import std;
using namespace std;

export auto error(const string& msg) -> void {
	throw runtime_error(msg);
}