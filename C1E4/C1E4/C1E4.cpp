// C1E4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 1000
int main()
{
	char line[MAX_LENGTH];
	char longestLine[MAX_LENGTH];
	int maxLength = 0;
	while (gets_s(line) != NULL) {

		int length = strlen(line);
		if (length > maxLength) {
			strcpy(longestLine, line);
			maxLength = length;
		}
	}
	printf("%s", longestLine);
    return 0;
}

