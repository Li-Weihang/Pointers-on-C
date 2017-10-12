// C4E4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void copy_n(char dst[], char src[], int n) {
	int i = 0;
	while (i<n && src[i] != '\0') {
			dst[i] = src[i];
			++i;
	}
	if (i < n) {
		for (int j = i; j < n; j++)
			dst[i] = '\0';
	}
}

int main()
{
	char d[20];
	char s[20] = "Hello World!";
	copy_n(d, s, 10);
	printf("%s", d);
    return 0;
}

