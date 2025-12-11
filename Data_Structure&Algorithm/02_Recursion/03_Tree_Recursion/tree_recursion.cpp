#include<iostream>
using namespace std;

/**
* @breif	linear_recursion(n){
*				if(n>0){
*					//.. 동작 1
*					linear_recursion(n-1)
*					//.. 동작 2
*					linear_recursion(n-1)
*
*/
/**
* @breif	tree_recursion(n){
*				if(n>0){
*					//..동작 1
*					tree_recursion(n-1)
*					//..동작 2
*				}
*			}
*/
void tree_recursion(int n) {
	if (n > 0) {
		cout << n << '\n';

		tree_recursion(n - 1);
		tree_recursion(n - 1);
	}

}




int main()
{
	tree_recursion(3);
	return 0;
}