#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void Exchange1(char* left, char* right)
{
	char tmp = 0;
	while (left < right)
	{
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void Exchange(char arr[])
{
	int len = strlen(arr);
	char* start = arr;
	char* end = NULL;
	char* ret = arr;
	Exchange1(arr, arr + len - 1);
	while (*arr)
	{
		start = arr;
		while ((*arr != ' ') && (*arr != '\0'))
		{
			arr++;
		}
		end = arr - 1;
		Exchange1(start, end);
		if (*arr == ' ')
		{
			arr++;
		}
	}
	printf("%s\n", ret);
}
int main()
{
	char arr[] = "student a am i";
	Exchange(arr);
	system("pause");
	return 0;
}