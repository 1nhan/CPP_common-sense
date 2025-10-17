/*******************************************************************************************

	[2](�̸�, ����) ���� �����ϴ� Name_pairs Ŭ������ �����ϰ� �����Ͻÿ�.
	���⼭ �̸�(name)�� ���ڿ�(string)�̰�, ����(age)�� �Ǽ�(double)�̴�.
	�� ���� vector(name�̶�� �̸��� ���)�� vector(age��� �̸��� ���)�� ǥ���Ͻÿ�.
	�Ϸ��� �̸����� �Է¹޴� read_names() �Է� ������ �����Ͻÿ�.
	�� �̸��� ���� ���̸� ��û�ϴ� read_ages() ������ �����Ͻÿ�. 
	(name[i], age[i])���� �� �ٿ� �ϳ��� ����ϴ� print() ������ �����Ͻÿ�.
	name ���͸� ���ĺ� ������ �����ϰ�, 
	�̿� �°� age ���͸� �������ϴ� sort() ������ �����Ͻÿ�.
	��� �����ꡱ�� ��� �Լ��� �����Ͻÿ�.
	�� Ŭ������ �׽�Ʈ�Ͻÿ�(����: ���� �׸��� ���� �׽�Ʈ�Ͻÿ�).

	[3] Name_pair::print()�� ���� ������ << �� ��ü�ϰ�,
	Name_pairs�� ���� == �� != �����ڸ� �����Ͻÿ�.

	[4] ���� ���������� �ٽ� �����ϵ�, 
	Name_pairs�� Name_pair Ŭ������ ����Ͽ� �����Ͻÿ�.

*******************************************************************************************/

import std;
using namespace std;

void error(const string& msg) {
	throw runtime_error(msg);
}

namespace E08_02 {
/*
	 namespace�� ����ϴ� ������ ���� ���ʿ������� ����غ�.
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
	Name_pair::print()�� ���� ������ << �� ��ü

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