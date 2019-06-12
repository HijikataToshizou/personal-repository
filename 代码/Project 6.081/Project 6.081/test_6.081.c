#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int count_one_bit(int num)
{
	int count = 0;
	while (num)
	{
		num = num & (num - 1);
		count++;
	}
	return count;
}
int main()
{
	int num = 0;
	int ret = 0;
	printf("请输入一个数：");
	scanf("%d", &num);

	ret = count_one_bit(num);
	printf("%d\n", ret);


	system("pause");
	return 0;
}

