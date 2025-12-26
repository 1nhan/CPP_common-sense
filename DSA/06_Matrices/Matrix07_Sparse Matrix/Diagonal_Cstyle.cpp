#include "Diagonal_Cstyle.h"
#include<iostream>


void	Diagonal::Create		()
{
	for (int i = 1; i <= dimention; ++i)
		for (int j = 1; j <= dimention; ++j)
		{
			std::cin			>> val;
			if (i == j)			A[i - 1] = val;
		}
}
void	Diagonal::Display		()
{
	for (int i = 1; i <= dimention; ++i)
	{
		for (int j = 1; j <= dimention; ++j)
		{
			if (i == j) std::cout	<< A[i - 1] << ' ';
			else std::cout			<< "0 ";
		}
		std::cout << '\n';
	}
}

