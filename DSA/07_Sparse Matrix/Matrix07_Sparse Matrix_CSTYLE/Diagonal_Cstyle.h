#pragma once


class Diagonal
{
	int* A, dimention, val;

public:
	Diagonal		()		
		:dimention{ 2 }, 
		A{ new int[dimention * (dimention + 1) / 2] }			{}
	Diagonal		(int d) 
		:dimention{ d }, 
		A{ new int[dimention * (dimention + 1) / 2] }			{}
	
	~Diagonal		()											{delete[]A; }

	void	Set				(int i, int j, int var)				{if(i==j) A[i-1] = var; }
	int		Get				(int i, int j)						{if(i==j) return A[i-1];}
	int		Get_Dimention	(int d)								{if(d> 0) return d;}
	void	Create			();
	void	Display			();											

};
 