
#include<iostream>
#include<string>
using namespace std;


/**
* @brief		is_palindrome
* - string 타입에 대한 회문검사.
* @param
* - const string& s
*/
bool is_palindrome(const string& s)
{
	int first = 0;
	int last = s.length() - 1;

	while (first < last) {
		if (s[first] != s[last]) return false;
		++first;
		--last;
	}

	return true;
}


/**
* @brief		is_palindrome
* - array에 대한 회문검사.
* * @param
* - const char s[]	:	array
* - int n			:	size
*/
bool is_palindrome(const char s[], int n)
{
	int first = 0;
	int last = n-1;

	while (s[first] < s[last]) {
		if (s[first] != s[last]) return false;
		++first;
		--last;
	}
	return false;
}


/**
* @brief		is_palindrome
* - 포인터를 이용한 회문
* 
* @param
* - const char*	first
* - const char*	last
*/
bool is_palindrome(const char*first, const char* last)
{
	while (first < last) {
		if (first != last) return false;
		/*++first;
		--last;*/
		return is_palindrome(first + 1, last - 1);
	}
	return true;
}
