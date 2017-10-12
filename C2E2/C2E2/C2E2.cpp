// C2E2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int left = 10;
int main()
{
	char ch;

//	bool flag = true;//大括号标志
	extern int left;
//	int right = 0;

#if 0
	while ((ch = getchar()) != EOF) {
//		int left = 10;
//		extern int left;
		printf("%d", left);
		if (ch == '{')
			left++;
		if (ch == '}'){
			if (left == 0)
				printf("error");
			else
				left--;

//		if (left < 0) {
//			printf("error");
//			return 0;
		}
	}
#endif
//	if (left != 0)
//		printf("Don't make pair");
	if (left > 0)
		printf("error");
    return 0;
}

