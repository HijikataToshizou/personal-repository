#include <stdio.h>
int main()
{
	int num[10];
	int max = num[0];
	int i = 0;
	for (i = 0; i<10; i++)
	{
		printf("�������%d����: ", i + 1);
		scanf("%d", &num[i]);
		if (num[i]>max)
			max = num[i];
	}
	printf("%d\n", max);
	return 0;
}
