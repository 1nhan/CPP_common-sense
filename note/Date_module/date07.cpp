/*
∟ Class Interface
	∟ Default Constructors

*/

import std;
using namespace std;

/*************************************************************************
* 
**************************************************************************/
struct Year
{
	int y;
};

/*************************************************************************
*				enum class Month, vector<string>month_tbl
**************************************************************************/
enum class  Month {
	jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string>month_tbl = {
	"?","jan", "feb", "mar", "apr", "may", "jun",
	"jul", "aug", "sep", "oct", "nov", "dec" };

/*************************************************************************
*				Month -> Int로 cast하는 함수 to_int
**************************************************************************/
int to_int(Month m) {
	return static_cast<int>(m);
}


/*************************************************************************
*	 빈 Default Constructors보다 합리적인 기본값 표기값인 21세기의 첫날을
*	선택하는 것이 합리적일 수 있습니다. 
**************************************************************************/
class my_Date {

public:
	/************************************************
	* 아래를 대신해 멤버 자체에 대신할 수 도 있습니다.
	my_Date() :y{ 2000 }, m{ Month::jan }, d{ 1 } {};
	*************************************************/
	my_Date() {};
	my_Date(Year y) :y{y} {};
	my_Date(Year y, Month m, int d);
	
	
	/**************************************************
	* nonmodifying에 대해 const 객체 호출이 가능
	***************************************************/
	int day() const;
	Month month() const;
	Year year() const; 

	auto add_day(int n) -> void { d+= n; };
	auto add_month(int n) -> void { month_tbl[to_int(m)] += n; };
	auto add_year(int n) -> void { y.y+=n; };

private:
	/*************************************************
	* 멤버 선언 시 지정된 초기값은 
	* 기본 멤버 초기값(default member initializer) 또는 
	* 클래스 내 초기값(in-class initializer)이라고 합니다.
	**************************************************/
	Year y{2000};
	Month m = Month::jan;
	int d = 1;
};










int main() {

	my_Date{ Year{2025},Month::oct,11 };

}