// C6E2.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int del_substr(char *str, char const *substr) {
	while (*str != '\0') {
		char const *p = NULL;
		while (*substr != '\0') {
			p = str;
			if (*p != *substr)
				break;
			else {
				str++;
				p++;
			}
		}
		str++;
	}
}

int main()
{
    return 0;
}

