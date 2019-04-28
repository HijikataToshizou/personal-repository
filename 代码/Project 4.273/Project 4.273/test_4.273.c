#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int tmp = 0;
	printf("请输入三个数用逗号隔开：");
	scanf("%d,%d,%d", &a, &b, &c);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)

	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)

	{
		tmp = b;
		b = c;
		c = tmp;

	}
	printf("%d,%d,%d\n", a, b, c);
	system("pause");
	return 0;
}