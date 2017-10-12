// C4E4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

void copy_n1(char dst[], char src[], int n) {
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

void copy_n(char dst[], char src[], int n) {
	int dst_index, src_index;
	src_index = 0;
	for (dst_index = 0; dst_index < n; dst_index++) {
		dst[dst_index] = src[src_index];
		if (src[src_index] != '\0')
			src_index++;
			
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

