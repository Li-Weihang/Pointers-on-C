// C1E3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	signed char checksum = -1;
	while ((ch = getchar()) != EOF) {
		checksum += ch;
		if (ch == '\n')
			break;
	}
	printf("%d\n", checksum);
//	printf("%c\n", 10);
    return EXIT_SUCCESS;
}

