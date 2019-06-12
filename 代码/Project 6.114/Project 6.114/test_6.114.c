#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value)
{
	int arr[32] = { 0 };
	unsigned int sum = 0;
	for (int i = 0; i < 32; i++)
	{
		arr[i] = value & 1;
		value = value >> 1;
	}
	for (int i = 0; i < 32; i++)
	{
		sum = sum + arr[i] * pow(2, 32 - 1 - i);
	}
	return sum;
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	unsigned int ret = reverse_bit(num);
	printf("翻转二进制后的值为：");
	printf("%u", ret);
	system("pause");
	return 0;
}