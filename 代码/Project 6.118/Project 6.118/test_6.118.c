#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void swap(int arr[], int sz)
{
	int *left = arr;
	int *right = arr + sz - 1;
	while (left < right)
	{
		while ((left<right) && (*left) % 2 != 0)
		{
			left++;
		}
		while ((left<right) && (*right) % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = *left;
			*left = *right;
			*right = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	swap(arr, sz);
	print(arr, sz);
	system("pause");
	return 0;
}