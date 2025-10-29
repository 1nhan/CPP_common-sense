/*******************************************************************************************

	[2](�̸�, ����) ���� �����ϴ� Name_pairs Ŭ������ �����ϰ� �����Ͻÿ�.
	���⼭ �̸�(name)�� ���ڿ�(string)�̰�, ����(age)�� �Ǽ�(double)�̴�.
	�� ����	vector(name�̶�� �̸��� ���)�� 
			vector(age��� �̸��� ���)�� ǥ���Ͻÿ�.
	�Ϸ��� �̸����� �Է¹޴� read_names() �Է� ������ �����Ͻÿ�.
	�� �̸��� ���� ���̸� ��û�ϴ� read_ages() ������ �����Ͻÿ�. 
	(name[i], age[i])���� �� �ٿ� �ϳ��� ����ϴ� print() ������ �����Ͻÿ�.
	name ���͸� ���ĺ� ������ �����ϰ�, 
	�̿� �°� age ���͸� �������ϴ� sort() ������ �����Ͻÿ�.
	��� �����ꡱ�� ��� �Լ��� �����Ͻÿ�.
	�� Ŭ������ �׽�Ʈ�Ͻÿ�(����: ���� �׸��� ���� �׽�Ʈ�Ͻÿ�).
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
	{//��ȿ�� �˻�
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
{//	�̸����� �Է¹޴� ����.
	cin >> var;
	name_vec.push_back(var);
}

auto Name_pairs::read_ages(double val) -> void
{//	�� �̸��� ���� ���̸� ��û�ϴ� ����. 
	cin >> val;
	age_vec.push_back(val);
}

auto Name_pairs::print() -> void 
{//(name[i], age[i])���� �� �ٿ� �ϳ��� ����ϴ� ����.
	if (name_vec.size() != age_vec.size())
		error("size of Diference");
	for(int i=0; i<name_vec.size();++i)
		name_vec[i]
}



/*
	[3] Name_pair::print()�� ���� ������ << �� ��ü�ϰ�,
	Name_pairs�� ���� == �� != �����ڸ� �����Ͻÿ�.

	[4] ���� ���������� �ٽ� �����ϵ�, 
	Name_pairs�� Name_pair Ŭ������ ����Ͽ� �����Ͻÿ�.

*******************************************************************************************/