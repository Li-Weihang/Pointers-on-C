// C4E5.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 
#define MAX_LENGTH 128
int main()
{
	char line[MAX_LENGTH];
	char before[MAX_LENGTH];
	gets_s(line);
	strcpy(before, line);
	while (gets_s(line) != NULL) {
		if (!strcmp(line, before)) {
			printf("%s", line);
		}
		strcpy(before, line);
	}
    return 0;
}

