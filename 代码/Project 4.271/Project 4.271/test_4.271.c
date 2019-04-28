#include <stdio.h>
#include <windows.h>
int main()
{
	int a = 1;
	int b = 2;
	int c;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d", a, b);
	system("pause");
	return 0;
}