// C8E6.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#define SIZE 50
int x[SIZE] = { 0 };
int y[SIZE] = { 0 };
int i;
int *p1, *p2;
void try1() {
	for (i = 0; i < SIZE; i++)
		x[i] = y[i];
}

void try2() {
	for (p1 = x, p2 = y; p1 - x < SIZE;)
		*p1++ = *p2++;
}

int main()
{
	try1();
	try2();
    return 0;
}

