#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable : 4996)
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	int j = 0;
	int c = 0;
	printf("����������Ҫ������:");
	scanf("%d", &a);
	printf("����������Ҫ������:");
	scanf("%d", &b);
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
		{
			c = i*j;
			printf("%2d*%2d=%2d", j, i, c);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
