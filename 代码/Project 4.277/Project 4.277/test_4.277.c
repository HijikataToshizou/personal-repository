#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int j;
	int k;
	for (i = 1; i < 8; i++)
	{
		j = 2 * i - 1;
		for (j; j>0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	k = i - 1;
	for (k; k > 0; k--)
	{
		j = 2 * k - 1;
		for (j; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
