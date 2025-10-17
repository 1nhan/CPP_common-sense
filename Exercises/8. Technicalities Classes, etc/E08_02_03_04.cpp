/*******************************************************************************************

	[2](이름, 나이) 쌍을 저장하는 Name_pairs 클래스를 설계하고 구현하시오.
	여기서 이름(name)은 문자열(string)이고, 나이(age)는 실수(double)이다.
	이 쌍은 vector(name이라는 이름의 멤버)과 vector(age라는 이름의 멤버)로 표현하시오.
	일련의 이름들을 입력받는 read_names() 입력 연산을 제공하시오.
	각 이름에 대해 나이를 요청하는 read_ages() 연산을 제공하시오. 
	(name[i], age[i])쌍을 한 줄에 하나씩 출력하는 print() 연산을 제공하시오.
	name 벡터를 알파벳 순으로 정렬하고, 
	이에 맞게 age 벡터를 재정렬하는 sort() 연산을 제공하시오.
	모든 “연산”은 멤버 함수로 구현하시오.
	이 클래스를 테스트하시오(물론: 자주 그리고 일찍 테스트하시오).

	[3] Name_pair::print()를 전역 연산자 << 로 대체하고,
	Name_pairs에 대해 == 및 != 연산자를 정의하시오.

	[4] 이전 연습문제를 다시 수행하되, 
	Name_pairs를 Name_pair 클래스를 사용하여 구현하시오.

*******************************************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

namespace E08_02 {
/*
	 namespace를 사용하는 습관을 위해 불필요하지만 사용해봄.
*/
	class Name_pairs {
	public:
		Name_pairs(vector<string>&vs,vector<double>&vd);
		vector<string> read_names();
		vector<double> read_ages();
		//void print(vector<string>&, vector<double>&);
		vector<double> sort(vector<double>&);
	private:
		vector<string> name;
		vector<double> age;
	};
}
using namespace E08_02;

ostream& operator<<(ostream& os, Name_pairs& pair)
{
	return os << pair<<'\n';
}


Name_pairs::Name_pairs(vector<string>& vs, vector<double>& vd)
	:name{ vs }, age{ vd }{}

vector<string> Name_pairs::read_names() {
	string word = " ";
	cin >> word;
	if (word == " ") error("none type");
	name.push_back(word);
	return name;
}

vector<double> Name_pairs::read_ages() {
	double num = -1;
	cin >> num;
	if (num < 0) error("error");
	age.push_back(num);
	return age;
}

/*
	Name_pair::print()를 전역 연산자 << 로 대체

void Name_pairs::print(vector<string>&vs, vector<double>&vd) {
	if (vs.size() != vd.size()) error("none equal size");
	for (int i = 0; i < vs.size(); ++i)
		cout << "name[" << vs[i] << "], age[" << vd[i] << '\n';
}
*/


int main() {
	

}
/*
	none
*/