// C1E2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
int main()
{
//	char input[100];
	char ch;
	int lineno = 0;
	bool beginofLine = true;
	while ((ch = getchar()) != EOF) {
		if (beginofLine) {
			lineno++;
			beginofLine = false;
			printf("%d ", lineno);
		}
		putchar(ch);
		if (ch == '\n')
			beginofLine = true;
	}


#if 0
	while (gets_s(input) != NULL) {
		lineno++;
		printf("%d %s",lineno, input);
	}
#endif
    return EXIT_SUCCESS;
}

