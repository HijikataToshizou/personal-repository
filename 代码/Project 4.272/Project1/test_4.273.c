#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("��������������");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)//a���С��b������ab��ֵ
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)//a���С��c������ac��ֵ

	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)//b���С��c������bc��ֵ

	{
		tmp = b;
		b = c;
		c = tmp;

	}
	printf("%d,%d,%d\n", a, b, c);
	return 0;
}