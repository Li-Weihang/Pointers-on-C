// C3E3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//检查合法性
	if ((a + b <= c) || (b + c) <= a || (a + c) <= b) {
		printf("illegal!");
		return 0;
	}
	if (a == b) {
		if (b == c)
			printf("等边");
		else
			printf("等腰");
	}
	else if (a == c) {
		printf("等腰");
	}
	else if (b == c) {
		printf("等腰");
	}
	else
		printf("普通");
	getchar();
    return 0;
}

