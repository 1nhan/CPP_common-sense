#pragma once

#include<initializer_list>
using namespace std;


/** 
* @name		Implement: Simple Vector 
* 
* **MEMBER FUNCTION**
* - Constructor
* - Explicit Constructor
* - initialize_list<T> Constructor
* - Destructor
* - Copy Constructor
* - Copy Operator
* - Move Constructor
* - Move Operator
* - Subscript Operator
* - Const Subscript Operator
* - Size
* - Capacity
* - Resize
* - Reserve
* - Pushback
* 
* - clear
* - empty
* **
* **MEMBER VARIABLE**
* - elem
* - sz
* - space
*/
template<typename T>
class Vector {
	int sz;
	int space;
	T* elem;
public:
	/** 
	* @brief	Constructor
	* 
	* @member_variable
	* - sz		= 0;
	* - space	= 0;
	* - elem	= nullptr;
	*/
	Vector() 
		:sz{ 0 }, space{ 0 }, elem{ nullptr } 
	{}

	/** 
	* @brief	Explicit Constructor
	* @param	int s
	* @member_variable
	* - sz		= s;
	* - space	= s;
	* - elem	= new T[s];
	*/
	explicit Vector(int s) 
		:sz{ s }, space{ s }, elem{ new T[s]} 
	{
		for (int i = 0; i < s; ++i)
			elem[i] = 0;
	}

	/**
	* @brief	initialize_list<T> Constructor
	* @param	initialize_list<T> lst
	* @note
	* - 
	*/
	Vector(std::initializer_list<T>lst)
		:sz{ static_cast<int>(lst.size()) },
		space{ static_cast<int>(lst.size()) },
		elem{ new T[lst.size()] }
	{
		std::copy(lst.begin(), lst.end(), elem);
	}

	/** 
	* @brief	Copy Constructor &
	* @param	const Vector& a
	* 
	* @member_variable
	* - sz		= a.sz
	* - space	= a.sz
	* -	elem	= a.sz
	*/
	Vector(const Vector& a) 
		:sz{ a.sz}, space{ a.sz }, elem{ new T[a.sz] }
	{
		std::copy(a.elem, a.elem + a.sz, elem);
	}

	/** 
	* @brief	Copy operator =
	* @param	Vector& a
	*/
	Vector& operator = (const Vector& a)
	{
		T* p = new T[a.sz];
		std::copy(a.elem, a.elem+a.sz, p);
		delete[] elem;
		elem = p;
		sz = a.sz;
		return *this;
	}

	/** 
	* @brief	Move Constructor && 
	* @param	Vector&& a
	* @member_variable
	* - sz		= a.sz
	* - space	= a.sz
	* - elem	= a.elem
	*/
	Vector(Vector&& a) 
		:sz{a.sz}, space{a.sz},elem{a.elem}
	{
		a.sz = 0;
		a.elem = nullptr;
	}

	/** 
	* @brief	Move operator =
	* @param	Vector&& a
	*/
	Vector& operator = (Vector&& a)
	{
		delete[] elem;
		
		elem = a.elem;
		sz = a.sz;
		
		a.elem = nullptr;
		a.sz = 0;

		return *this;
	}

	/**
	* @brief	Destroyer ~
	* @delete	elem[]
	*/
	~Vector() { delete[] elem; }

	/**
	* @brief	Subscript operator []
	* @param	int i
	* @return	T& elem[i]
	*/
	T& operator[](int i)
	{
		return elem[i];
	}

	/**
	* @brief	const Subscript operator []
	* @param	int i
	* @return	T elem[i]
	*/
	T operator[](int i) const
	{
		return elem[i];
	}

	/** 
	* @brief	Size 
	* @return	int sz
	*/
	int Size() const { return sz; }

	/**
	* @brief	Capacity 
	* @return	int space
	*/
	int Capacity() const { return space; }

	/** 
	* @brief	Reserve 
	* @param	int newalloc
	*/
	void Reserve(int newalloc)
	{
		if (newalloc < space) return;
		T* p = new T[newalloc];
		for (int i = 0; i < sz; ++i) 
			p[i] = elem[i];
		delete[] elem;
		elem = p;
		space = newalloc;
	}

	/**
	* @brief	Resize 
	* @param	int newsize
	* @note
	* - newsize만큼 Reserve함수를 이용해 space를 확장시킨다.
	* - 확장된 공간. sz<= 이만큼 <newsize 요소를 0으로 초기화.
	* - size에 대해 newsize로 초기화하며 마무리
	*/
	void Resize(int newsize)
	{
		Reserve(newsize);
		for (int i = sz; i < newsize; ++i)
			elem[i] = 0;
		sz = newsize;
	}

	/** 
	* @brief	Push_back
	* @param	T& d
	* @note
	* - d를 sz(end)에 대입
	* - space가 0일때 
	* - space가 sz와 같다면
	*/
	void Push_back(T& d)
	{
		if (space == 0)
			Reserve(8);
		else if (space == sz)
			Reserve(2 * space);
		elem[sz] = d;
		++sz;
	}

	/**
	* @brief	empty
	* - 사이즈가 0인지 아닌지 확인해주는 함수
	* @note
	* - sz==0이면 true 아니면 false을 반환
	* 
	*/
	bool empty() const { return sz==0; }

	void clear() {
		for (int i = 0; i < sz; ++i)
			elem[i].~T();

		sz = 0;
	}

};