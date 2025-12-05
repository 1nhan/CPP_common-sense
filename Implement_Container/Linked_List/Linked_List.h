#pragma once
/**
* @class	Simple Implement:	List
***MEMBER CLASS**
* - class Iterator
* 
***MEMBER FUNCTION**
* - begin	
* - end	
* - insert	
* - erase
* - 
* - push_back
* - push_front	
* - pop_front	
* - pop_back	
* 
* - front	
* - back	
* 
***MEMBER VARIABLE**
* - link<Elem>* first;
* - link<Elem>* last;
* 
* @note
* -
*/
template<typename Elem> class list {
	link<Elem>* first;
	link<Elem>* last;

public:
	class Iterator	;
	Iterator			begin					();
	Iterator			end						();
	Iterator			insert					();
	Iterator			erase					();
	
	void				push_back				();
	void				push_front				();
	void				pop_front				();
	void				pop_back				();
								
	Elem &				front					();
	Elem &				back					();
};

/**
* @class						Iterator
* @tparam
*  - typename Elem
* 
* **MEMBER FUNCTION**
* - Constructor
* - operator ++
* - operator --
* - operator *
* - operator ==
* - operator !=
* 
* **MEMBER VARIABLE**
* - link<Elem>* curr
* 
* @note
*  - list Iterator에서 반드시 ++, --, *, ==, !=을 정의해야함.
*  - 
*/
template<typename Elem> class Iterator {
	link<Elem>* curr;

public:
	
	/**
	* @brief					Constructor
	* @param Link<Elem>* p
	*/
	Iterator& (link<Elem>* p)
		: curr{ p } {
	};

	/**
	* @brief					operator++
	* @note
	* - 정방향으로 이동
	*/
	Iterator& operator++()
	{ curr = curr -> succ; return *this; }

	/**
	* @brief					operator--
	* @param
	* - link<Elem>* c
	*/
	link<Elem>* operator--(link<Elem>* c)
	{ curr = curr -> prev; return *this; }

	/**
	* @brief					operator*
	* @param
	* - link<Elem>* c
	* @return 
	* - Elem&
	*/
	Elem& operator*()
	{ return curr -> val; }

	/**
	* @brief					operator==
	*  - 
	* @param
	* - link<Elem>* c
	* @return 
	* - bool 
	* @note
	* - operator== overloading
	*/
	bool operator==(const Iterator& b)
	{ return curr == b.curr; }

	/**
	* @brief					operator!=
	* @param
	* - link<Elem>* c
	* @return
	* - bool
	* @note
	* - operator!= overloading
	*/
	bool operator!=(const Iterator& b)
	{ return curr != b.curr; }


};


/**
* @class	Simple Implement:	List
***MEMBER CLASS**
*
***MEMBER FUNCTION**
* -
* 
***MEMBER VARIABLE**
* - link* succ
* - link* prev
* - Elem* val
* 
* @note
* -
*/
template<typename Elem> struct link {
	link* succ;
	link* prev;
	Elem val;
};
