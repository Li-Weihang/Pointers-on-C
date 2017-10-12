// C4E2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int num) {
	if (num == 1)
		return false;
	if (num == 2)
		return true;
	for (int j = 2; j < num / 2; j++) {
		if (num % j == 0)
			return false;
	}
	return true;
}

int main()
{
	for (int i = 1; i <= 100; i++) {
		if (isPrime(i))
			printf("%d is a prime\n", i);
	}
    return 0;
}

