/*********************************************************************************

	[7] vector<string> name에 다섯 개의 이름을 입력받고, 
	사용자에게 해당 인물들의 나이를 입력받아 vector<double> age에 저장하시오.
	그런 다음 다섯 쌍의(name[i], age[i])를 출력하시오.
	이름을 정렬한 후(sort(name.begin(), name.end())), 
	다시(name[i], age[i]) 쌍을 출력하시오.
	여기서 까다로운 부분은 정렬된 이름 벡터에 맞게 나이 벡터의 순서를 맞추는 것입니다.
	힌트: 이름을 정렬하기 전에 복사본을 만들어두고, 
	이를 사용하여 정렬 후 올바른 순서의 나이 벡터를 생성하시오.

	[8] 이전 연습문제를 수정하여 이름의 개수를 임의로 입력받을 수 있도록 하시오.

*********************************************************************************/

import std;
using namespace std;

void copy_vector(vector<string>& name, vector<double>& age)
{
	for (int i : age) cout << i << '\n';
};
int main(void)
{
	int num = 5;
	int how = num;
	cin >> how;
	string name_val = " ";
	vector<string> name_vec;
	double age_val = 0.0;
	vector<double>age_vec;

	
	for (int i = 0; i < num; ++i) {
		cin >> name_val;
		name_vec.push_back(name_val);
	}
	for (int i = 0; i < how; ++i) {
		cin >> age_val;
		age_vec.push_back(age_val);
	}
	sort(age_vec.begin(), age_vec.end());
	copy_vector(name_vec,age_vec);
	sort(name_vec.begin(), name_vec.end());

	for (int i = 0; i < num; ++i) {
		cout << "이름: " << name_vec[i] << '\n' 
			<< "나이: " << age_vec[i] << '\n';
	}

}