/*******************************************************************************************

	[2](이름, 나이) 쌍을 저장하는 Name_pairs 클래스를 설계하고 구현하시오.
	여기서 이름(name)은 문자열(string)이고, 나이(age)는 실수(double)이다.
	이 쌍은	vector(name이라는 이름의 멤버)과 
			vector(age라는 이름의 멤버)로 표현하시오.
	일련의 이름들을 입력받는 read_names() 입력 연산을 제공하시오.
	각 이름에 대해 나이를 요청하는 read_ages() 연산을 제공하시오. 
	(name[i], age[i])쌍을 한 줄에 하나씩 출력하는 print() 연산을 제공하시오.
	name 벡터를 알파벳 순으로 정렬하고, 
	이에 맞게 age 벡터를 재정렬하는 sort() 연산을 제공하시오.
	모든 “연산”은 멤버 함수로 구현하시오.
	이 클래스를 테스트하시오(물론: 자주 그리고 일찍 테스트하시오).
*/
import std;
using namespace std;

auto error(const string& msg)
{
	throw runtime_error(msg);
}

class Name {
public:
	Name(string var) :name{ var } {};
	
	auto get_name() -> string 
	{
		if (!is_valid())
			return;
		return name; 
	}
	auto is_valid() -> bool 
	{
		if (!cin) {
			if (cin.eof()) {
				return false;

			}
			if (cin.fail()) {
				cin.clear();
				char a;
				cin >> a;
			}
			return false;
			
		
		}
		return true;
	}
private:
	string name{"Lee"};
};

class Age {
public:
	Age(double val) :age{ val } {};
	auto get_age()->double { return age; }
	auto is_valid() -> bool;
private:
	double age{ 0 };
};

class Name_pairs {
public:
	class Invalid {};
	auto is_valid() -> bool 
	{//유효성 검사
		if (age.get_age()< 0 || age.get_age()>150)
			return false;
		return true;
	}
	auto print() -> void;
	auto read_names(string var) -> void;
	auto read_ages(double val) -> void;
private:
	Name name;
	vector<Name>name_vec;
	Age age;
	vector<Age>age_vec;

};

auto Name_pairs::read_names(string var) -> void
{//	이름들을 입력받는 연산.
	cin >> var;
	name_vec.push_back(var);
}

auto Name_pairs::read_ages(double val) -> void
{//	각 이름에 대해 나이를 요청하는 연산. 
	cin >> val;
	age_vec.push_back(val);
}

auto Name_pairs::print() -> void 
{//(name[i], age[i])쌍을 한 줄에 하나씩 출력하는 연산.
	if (name_vec.size() != age_vec.size())
		error("size of Diference");
	for(int i=0; i<name_vec.size();++i)
		name_vec[i]
}



/*
	[3] Name_pair::print()를 전역 연산자 << 로 대체하고,
	Name_pairs에 대해 == 및 != 연산자를 정의하시오.

	[4] 이전 연습문제를 다시 수행하되, 
	Name_pairs를 Name_pair 클래스를 사용하여 구현하시오.

*******************************************************************************************/