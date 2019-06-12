#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


int count_one_bits(int num, int count) 
{
	while (num)
	{
		count++;
		num = num&(num - 1);
	}
	return count;
}
int main()
{
	int count = 0;
	int m = 0;
	int n = 0;
	int a = 0;
	int i = 0;
	printf("请输入两个数：\n");
	scanf("%d%d", &m, &n);
	a = m^n; 
	i = count_one_bits(a, count);
	printf("参数二进制中不同的个数为：%d\n", i);
	system("pause");
	return 0;
}
