#include <stdio.h>
int main()
{
	int num[10];
	int max = num[0];
	int i = 0;
	for (i = 0; i<10; i++)
	{
		printf("请输入第%d个数: ", i + 1);
		scanf("%d", &num[i]);
		if (num[i]>max)
			max = num[i];
	}
	printf("%d\n", max);
	return 0;
}
