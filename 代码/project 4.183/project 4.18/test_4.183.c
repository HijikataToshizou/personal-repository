#include<stdio.h>
#include<stdlib.h>
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			count++;
			printf("%d ", year);
		}
	}
	printf("\ncount=%d", count);
	system("pause");
	return 0;
}
