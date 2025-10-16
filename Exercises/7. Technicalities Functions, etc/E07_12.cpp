
/*******************************************************************************************
	
	[12] 
	```
	void print_until(vector v, string quit){ // "quit"�̶�� ���ڿ��� ���� ������ ���
		for (string s : v) {
		if (s == quit) return;
		cout << s << '\n';
		}
	}

	```
	�� �����ϰ� �׽�Ʈ�Ͻÿ�.
	���� �׽�Ʈ ���̽��� ��������, �� ������ �����Ͻÿ�.
	�׷� ���� ���� �μ��� �� ��°�� ������ ������ ����ϴ� print_until_ss() �Լ��� �ۼ��Ͻÿ�.

*******************************************************************************************/

import std;
using namespace std;


void print_until(vector<string>&v, string&quit) { // "quit"�̶�� ���ڿ��� ���� ������ ���
	for (string s : v) {
		if (s == quit) return;
		cout << s << '\n';
	}
}

/*

void print_until_ss(vector<string>&v, string&quit) {
	int count = 0;
	for (string& s : v) {
		if (s == quit) {
			count++;
		}
		else if (count == 2) {
			return; 
		}
		cout << s << ' ';
	}

}
*/

int main() {
	/*
	print_until(test,quit);
	*/
	string quit = "quit";
	vector<string>test = { "what" ,"happen","ning","?", "quit", "quit","quit","no" };
	print_until_ss(test,quit);
}
