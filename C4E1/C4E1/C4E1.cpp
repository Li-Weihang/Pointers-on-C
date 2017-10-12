// C4E1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>

int main()
{
	float num ;
	scanf("%f", &num);
	printf("%f", num);
	float result = 1.0;
	float lastresult = 0;
	while (lastresult != result ) {
		lastresult = result;
		result = (result + num / result) / 2;
		printf("%f\n", result);
	}
	printf("%f", result);
	return 0;
}

