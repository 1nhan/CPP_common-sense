#pragma once
#include<string>
using namespace std;

/**
* @class	Simple Implement:	List
* **member_function
* - Constructor
* - Insert
* - Add
* - Erase
* - Find
* - Advance
* - next
* - previous
* 
* **member_variable
* - Link*		succ
* - Link*		prev
* - string		val
* 
* @note
* -
*/

class Link {
	Link* prev;
	Link* succ;
	string name;

public:
	/**
	* @brief					Constructor
	* @param			
	* - string& var
	* - Link*p=nullptr 
	* - Link*s=nullptr
	* 
	* @note
	* - 
	*/
	Link(string& var, Link* p = nullptr, Link* s = nullptr)
		:name{var},prev{p},succ{s} 
	{}
	
	/**
	* @brief					Insert
	* - 지정된 요소 앞에 삽입
	* @param
	* - Link* p
	* - Link* n
	*
	* @note
	* - (p->prev) <--> n <--> p <--> (p->succ)
	* - n에 대한 포인터 구현이 핵심.
	*/
	Link* Insert(Link* p, Link* n)
	{
		if (p == nullptr) return p;
		if (n == nullptr) return n;

		n->succ = p;					// n --> p 설정
		if(p->prev)
			p->prev->succ = n;			// (p->prev) --> n 설정

		n->prev = p->prev;				// (p->prev) <-- n 설정
		p->prev = n;					// n <-- p 설정

		return n;
	}

	/**
	* @brief					Add
	* - 지정된 요소 뒤에 삽입
	* @param			
	* -	Link* p
	* - Link* n
	* @note
	* - (p->prev) <--> p <--> n <--> (p->succ)
	* - n에 대한 포인터 구현이 핵심
	*/
	Link* Add(Link* p, Link* n)
	{
		if (p == nullptr) return p;
		if (n == nullptr) return n;

		n->prev = p;					// p <-- n
		n->succ = p->succ;				// n --> (p->succ)
		
		if(p->succ)
			p->succ->prev = n;			// n <-- (p->succ)
		p->succ = n;					// p --> n

		return n;
	}

	/**
	*  @brief					Erase
	* - 삭제라기보다 루트를 바꿔준다는게 맞음.
	*  @param
	* - Link* p
	*  @note
	* - (p->prev) <--> p <--> (p->succ)	일때
	* - (p->prev) -->  <-- (p->succ)	이렇게 만들어줘야 함
	*/
	Link* Erase(Link* p)
	{
		if (p == nullptr) return nullptr;
		if (p->succ)p->succ->prev = p->prev;	// (p->prev)<--(p->succ) 
		if (p->prev)p->prev->succ = p->succ;	// (p->prev)-->(p->succ)
		return p->succ;
	}

	/**
	*  @brief					Find
	* - var에 대한 p로 탐색
	*  @param
	* - Link*p
	* - const string& var
	*  @note
	* - p가 nullptr이 아닌동안 탐색
	* - p의 name이 var과 같다면 현재 p를 반납.
	* - 아니면 p 다음 순번..
	*/
	Link* Find(Link* p, const string& var)
	{
		while (p) {
			if (p->name == var) return p;
			p = p->succ;
		}
		return nullptr;
	}

	/**
	*  @brief					Advance
	* - n만큼 뒤에 있는 지정된 값 찾기
	*  @param
	* - Link* p
	* - int n
	*  @note
	* - n > 0 -> succ로 이동 
	* - n < 0 -> prev로 이동
	* - nullptr 만날시 return 
	*/
	Link* Advance(Link* p, int n)
	{
		if (p == nullptr) return nullptr;
		if(n>0)
			while (n--) {
				if (p->succ == nullptr) return nullptr;
				p = p->succ;
			}
		else if(n<0)
			while (n++) {
				if (p->prev == nullptr) return nullptr;
				p = p->prev;
			}
		return p;
	}

	/**
	* @brief					previous
	* - 
	* @return					Link* prev
	*/
	Link* previous	() const	{ return prev; }

	/**
	* @brief					next
	* -
	* @return					Link* succ 
	*/
	Link* next		() const	{ return succ; }
};