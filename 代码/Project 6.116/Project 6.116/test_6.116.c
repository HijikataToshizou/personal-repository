#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
int main() {
	int arr[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 8, 8 };
	int temp = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		temp ^= arr[i];
	}
	printf("%d\n", temp);
	system("pause");
	return 0;
}