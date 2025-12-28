#pragma once
#include"Elements_Cstyle.h"
#include<stdlib.h>
#include<stdio.h>

struct Sparse
{
	// nnz : number of non-zero numbers
	int						m, n, nnz; 
	struct Elements*		e;
};

void Create					(struct Sparse* s)
{
	printf("Enter Dimention ");
	scanf_s("%d%d", &s->m , &s->n);
	printf("number of non-zero ");
	scanf_s("%d", &s->nnz);
	
	s->e = (Elements*)malloc(s->nnz *sizeof(Elements));
	printf("Enter non-zero Elements\n");

	for (int i = 0; i <	s->nnz; ++i)
	{
		scanf_s("%d%d%d",	&s->e[i].row
						,	&s->e[i].col
						,	&s->e[i].val);
	}
}

void display				(struct Sparse & s)
{
	int i, j, k				= 0;
	for (i = 0; i < s.m; i++)
	{
		for (j = 0; j < s.n; j++)
		{
			if (i == s.e[k].row 
			 && j == s.e[k].col)
				printf(" %d ",s.e[k++].val);
			else printf(" 0 ");
		}
		printf("\n");
	}
}

struct Sparse * add					(struct Sparse * s1, struct Sparse* s2)
{
	// allocate result sparse matrix object
	struct Sparse* sum		= (struct Sparse*)	 malloc	(sizeof(struct Sparse));
	sum->e					= (struct Elements*) malloc ((s1->nnz+s2->nnz)*sizeof(struct Elements));
	sum->m					= s1->m;
	sum->n					= s1->n;
	int i					= 0,
		j					= 0,
		k					= 0;

	// merge elements from s1 and s2 while both have remaining entries
	while (i < s1->nnz && j < s2->nnz)
	{
		// compare row indices
		if		(s1->e[i].row < s2->e[j].row)	sum->e[k++] = s1->e[i++];
		else if (s1->e[i].row > s2->e[j].row)	sum->e[k++] = s2->e[j++];
		
		// if rows are equal, compare column indices
		else {
			if		(s1->e[i].col < s2->e[j].col)	sum->e[k++] = s1->e[i++];
			else if (s1->e[i].col > s2->e[j].col)	sum->e[k++] = s1->e[j++];
		
			// same row and same column ¡æ add values
			else {
				sum ->e[k]							= s1 -> e[i];
				sum ->e[k++].val					= s1 -> e[i++].val + s2 ->e[j++].val;
			}
		}
	}

	// handle leftover elements (remaining entries from s1 or s2)
	for (; i < s1 -> nnz; i++) sum -> e[k++] = s1 -> e[i];
	for (; j < s2 -> nnz; j++) sum -> e[k++] = s2 -> e[j];

	// set final non-zero count
	sum -> nnz = k;

	//return sum
	return	sum;
}
