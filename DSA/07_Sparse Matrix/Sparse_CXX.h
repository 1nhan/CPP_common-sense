#pragma once
#include<memory>
#include "Elements_CXX.h"
#include <iostream>
using namespace std;

class Sparse {
	int			m,
				n,
				nnz;
	Elements*	ele;	//element
public:
	Sparse(int m, int n, int nnz)
		:m{m}, n{n}, nnz{nnz}, ele{new Elements[nnz]}				{ }
	~Sparse				()											{delete[] ele;}
	
	int					get_m		()			const				{ return m; }
	int					get_nnz		()			const				{ return nnz; }
	int					get_n		()			const				{ return n; }
	Elements&			get_ele		(int i) 	const				{ return ele[i]; }
	unique_ptr<Sparse>	operator+	(Sparse& s) const;
};

istream& operator>>(istream& is, Sparse& s)
{
	cout << "Enter non-zero Elements" << '\n';
	
	int c, r, v;
	for (int i = 0; i < s.get_nnz(); ++i)
	{
		is >> r >> c >> v;
		s.get_ele(i).set_row(r);
		s.get_ele(i).set_col(c);
		s.get_ele(i).set_val(v);
	}
	return is;
}

ostream& operator<<(ostream& os, Sparse& s)
{
	int k = 0;

	for(int i = 0 ; i < s.get_nnz();++i)
	{
		for (int j = 0; j < s.get_nnz(); ++j)
		{
			if (s.get_ele(k).get_row() == i 
			 && s.get_ele(k).get_col() == j)
				os << s.get_ele(k++).get_val() << ' ';
			else os << "0 ";
		}
		os << '\n';
	}
	return os;
}

unique_ptr<Sparse> Sparse::operator+ (Sparse& s) const
{
	if (m != s.get_m() || n != s.get_m()) 
		throw invalid_argument("Matrix dimentions must match");
	
	int		i						= 0, 
			j						= 0, 
			k						= 0;

	auto    sum						=make_unique<Sparse>(m,n,nnz+s.nnz);
	
	while (nnz > i && j < nnz)
	{
		// row -> col -> == ¼ø
		if (ele[i].get_row() < s.get_ele(j).get_row())			sum->ele[k++] = s.get_ele(i++);
		else if(ele[i].get_row() > s.get_ele(i).get_row())		sum->ele[k++] = s.get_ele(j++);
		else
		{
			if (ele[i].get_row() < s.get_ele(i).get_row())		sum->ele[k++] = s.get_ele(i++);
			else if (ele[i].get_row() > s.get_ele(i).get_row())	sum->ele[k++] = s.get_ele(j++);
			else {
				sum->ele[k]					= s.get_ele(i);
				sum->get_ele(k++).set_val(get_ele(i++).get_val() + s.get_ele(j++).get_val());
			}
		}
	}
	for (; i < nnz; ++i) sum->ele[k++] = get_ele(i);
	for (; j < nnz; ++j) sum->ele[k++] = get_ele(j);
	sum->nnz = k;
	
	return sum;
}