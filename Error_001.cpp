import std;
using namespace std;

void error(const string& msg)
{
	throw runtime_error(msg);
}

int main(void)
try {
	error("error?\n");
}
catch(const runtime_error & e){
	cerr << "error now" << e.what() << '\n';
}

