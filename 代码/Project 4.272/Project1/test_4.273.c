#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("请输入三个数：");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)//a如果小于b，交换ab的值
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)//a如果小于c，交换ac的值

	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)//b如果小于c，交换bc的值

	{
		tmp = b;
		b = c;
		c = tmp;

	}
	printf("%d,%d,%d\n", a, b, c);
	return 0;
}