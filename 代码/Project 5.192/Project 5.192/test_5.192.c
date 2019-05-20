#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include"game_5.192.h"
void game()
{
	int x = 0;
	int y = 0;
	int xuanxiang = 0;
	int safenum = 0;
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);

	SetMine(mine, ROW, COL, Easy_count);

	while (safenum < ((ROW*COL) - Easy_count))
	{
		printf("+++++++++++++++++++++++++++++++++\n");
		printf("+1.排雷 2.标记 3.取消标记 0.退出+\n");
		printf("+++++++++++++++++++++++++++++++++\n");
		printf("请选择\n");
		scanf_s("%d", &xuanxiang);
		if (xuanxiang == 1)
		{
			printf("请输入坐标\n");
			scanf_s("%d %d", &x, &y);
			if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
			{
				if (mine[x][y] == '1')
				{
					if (safenum == 0)//是否是第一次扫雷
					{
						mine[x][y] = '0';
						SetMine(mine, ROW, COL, 1);
						Sweep(mine, show, x, y, &safenum);//如果第一次扫到雷，避免第一次被炸死，将1变成0，并且将一个雷重新随机生成到mine里边去，让雷的数量不变。
					}
					else
					{
						printf("很抱歉，你被炸死了！！！！！！！！\n");
						DisplayBoard(mine, ROW, COL);
						return;
					}
				}
				else
				{
					Sweep(mine, show, x, y, &safenum);
					DisplayBoard(show, ROW, COL);
				}
			}
			else
			{
				printf("输入错误,请重新输入\n");
			}
		}
		else if (xuanxiang == 2)
		{
			printf("请输入坐标\n");
			scanf_s("%d %d", &x, &y);
			sign(show, x, y);
			DisplayBoard(show, ROWS, COLS);
		}
		else if (xuanxiang == 3)
		{

			printf("请输入坐标\n");
			scanf_s("%d %d", &x, &y);
			unsign(show, x, y);
			DisplayBoard(show, ROWS, COLS);
		}
		else if (xuanxiang == 0)
		{
			return;
		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	printf("恭喜你扫雷成功！！！！！！！！\n");
	DisplayBoard(mine, ROW, COL);
}
void mune()
{
	printf("*******************\n");
	printf("*****   扫雷  *****\n");
	printf("*******************\n");
	printf("***** 1.play  *****\n");
	printf("***** 0.exit  *****\n");
	printf("*******************\n");
}
void test()
{
	mune();
	srand((unsigned)time(NULL));
	int input = 0;
	do
	{

		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
		default:
			printf("输入有错，请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	system("pause");
	return 0;
}