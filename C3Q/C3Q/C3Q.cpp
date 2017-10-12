// C3Q.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <limits.h>
#include <float.h>
#include <stdio.h>

static int w = 5;
extern int x;
static void
func1(int a, int b, int c) {
	int d, e = 1;
	{
		int d, e, w;
		{
			int b, c, d;
			static int y = 2;
		}
	}
	{
		register int a, d, x;
		extern int y;
	}
}
static int y;
void 
func2(int a) {
	extern int y;
	static int z;
}

int main()
{

	//char*   szStringA = "Hello,world!";
	//char*   szStringB = "Hello,world!";

	//*szStringA = '-';
	//puts(szStringB);
	//{

	//}
	//short a = 23131231321312;
	//printf("%d\n", a);
	//float b = 324234234234234234234234234.3423423;
	//printf("%f\n", b);
	//printf("min: %d, max: %d\n", SCHAR_MIN, SCHAR_MAX);
	//printf("min: %d, max: %d\n", SHRT_MIN, SHRT_MAX);
	//printf("min: %d, max: %d\n", INT_MIN, INT_MAX);
	//printf("min: %d, max: %d\n", LONG_MIN, LONG_MAX);
	//printf("min: %f, max: %f\n", FLT_MIN, FLT_MAX);
	//printf("min: %f, max: %f\n", DBL_MIN, DBL_MAX);
	//enum change { PENNY, NICKEL };
	//change c = PENNY;
	return 0;
}

