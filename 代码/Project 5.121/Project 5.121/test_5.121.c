#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int main()
{
	int n = 0;
	int a = 1;
	int b = 1;
	int c = a;
	printf("������Ҫ��ĵ�n���Ʋ��������� n = ");
	scanf("%d", &n);
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	printf("%d\n", c);
	system("pause");
	return 0;
}