// C3E3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	//���Ϸ���
	if ((a + b <= c) || (b + c) <= a || (a + c) <= b) {
		printf("illegal!");
		return 0;
	}
	if (a == b) {
		if (b == c)
			printf("�ȱ�");
		else
			printf("����");
	}
	else if (a == c) {
		printf("����");
	}
	else if (b == c) {
		printf("����");
	}
	else
		printf("��ͨ");
	getchar();
    return 0;
}

