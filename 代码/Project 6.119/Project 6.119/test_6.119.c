#include <stdio.h>
#include <Windows.h> 
void FindKey(int arr[3][3], int* px, int* py, int key)
{
	int x = 0;
	int y = *py - 1;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] == key)
		{
			*px = x;
			*py = y;
			return;
		}
		else if (arr[x][y] < key)
		{
			x++;
		}
		else
		{
			y--;
		}
	}
	*px = -1;
	*py = -1;
}

int main()
{
	int arr[3][3] = { 1, 3, 4,
		2, 4, 5,
		4, 5, 6 };
	int x = 3;
	int y = 3;
	FindKey(arr, &x, &y, 6);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}
