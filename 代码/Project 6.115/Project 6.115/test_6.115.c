#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<math.h>


int average(int a, int b)
{
	int avg = (a&b) + (a^b) / 2;  
	printf("%d\n", avg);
}
int main()
{
	int a, b, ret;
	printf("«Î ‰»Î a b:\n");
	scanf_s("%d%d", &a, &b);
	ret = average(a, b);
	system("pause");
	return 0;
}