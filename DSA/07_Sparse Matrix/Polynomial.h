#pragma once

#include"Term.h"
#include<stdio.h>
#include<stdlib.h>
struct Polynomial
{
	int n;
	struct Term* t;
};

void create(struct Polynomial* p)
{
	printf("number of term\n");
	scanf("%d", &p->n);

	p->t = (struct Term*)malloc(p->n * sizeof(struct Term));

	printf("enter terms\n");
	for (int i = 0; i < p->n; ++i)
		scanf("%d%d", &p->t[i].coefficient, &p->t[i].exponent);
}

void display(struct Polynomial* p)
{
	for (int i = 0; i < p->n; ++i)
		printf("%dX^%d+", p->t[i].coefficient, p->t[i].exponent);
	printf("\n");
}
void destory(struct Polynomial* p)
{
	free(p->t);
	p->t = NULL;
}

//int addition_sparse_matrix()