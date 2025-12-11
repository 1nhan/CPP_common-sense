#include<iostream>
using namespace std;

void indirect_recursionA(int n) {
	if (n > 0) {
		cout << n << '\n';
		indirect_recursionB(n - 1);
	}
}
void indirect_recursionB(int n) {
	if (n > 0) {
		cout << n << '\n';
		indirect_recursionA(n - 1);
	}
}




int main() {

	indirect_recursionA(20);
	return 0;
}