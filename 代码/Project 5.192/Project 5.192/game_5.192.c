#include<stdio.h>
#include<windows.h>
#include"game_5.192.h"
#include<time.h>
#include<stdlib.h>
void InitBoard(char board[ROWS][COLS], int row, int col, char flag)
{
	memset(board, flag, row*col*sizeof(board[0][0]));
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("  ");
	for (i = 1; i <= row; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%-2d", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;//没生成一个雷雷的数量减一
		}
	}
}
void Sweep(char board1[ROWS][COLS], char board2[ROWS][COLS], int x, int y, int *Num)
{

	int i = 0;
	int j = 0;
	int AroundCount = 0;
	if (board2[x][y] == '*')
	{
		(*Num)++;
		AroundCount = GetCount(board1, x, y);//坐标周围雷的数量。
		if (AroundCount != 0)
		{
			board2[x][y] = '0' + AroundCount;
		}
		else
		{
			board2[x][y] = '0';
			for (i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					if (x + i >= 1 && x + i <= ROW && y + j >= 1 && y + j <= COL)
					{
						if (i != 0 || j != 0)
						{
							Sweep(board1, board2, x + i, y + j, Num);
						}
					}
				}
			}
		}
	}
}
int GetCount(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] +
		board[x - 1][y] +
		board[x - 1][y + 1] +
		board[x][y + 1] +
		board[x + 1][y + 1] +
		board[x + 1][y] +
		board[x + 1][y - 1] +
		board[x][y - 1] - 8 * '0';
}
void sign(char board[ROWS][COLS], int x, int y)
{
	if (board[x][y] == '*')
	{
		board[x][y] = '@';
	}
}
void unsign(char board[ROWS][COLS], int x, int y)
{
	if (board[x][y] == '@')
	{
		board[x][y] = '*';
	}
}