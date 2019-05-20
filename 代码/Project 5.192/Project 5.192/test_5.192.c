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
		printf("+1.���� 2.��� 3.ȡ����� 0.�˳�+\n");
		printf("+++++++++++++++++++++++++++++++++\n");
		printf("��ѡ��\n");
		scanf_s("%d", &xuanxiang);
		if (xuanxiang == 1)
		{
			printf("����������\n");
			scanf_s("%d %d", &x, &y);
			if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
			{
				if (mine[x][y] == '1')
				{
					if (safenum == 0)//�Ƿ��ǵ�һ��ɨ��
					{
						mine[x][y] = '0';
						SetMine(mine, ROW, COL, 1);
						Sweep(mine, show, x, y, &safenum);//�����һ��ɨ���ף������һ�α�ը������1���0�����ҽ�һ��������������ɵ�mine���ȥ�����׵��������䡣
					}
					else
					{
						printf("�ܱ�Ǹ���㱻ը���ˣ���������������\n");
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
				printf("�������,����������\n");
			}
		}
		else if (xuanxiang == 2)
		{
			printf("����������\n");
			scanf_s("%d %d", &x, &y);
			sign(show, x, y);
			DisplayBoard(show, ROWS, COLS);
		}
		else if (xuanxiang == 3)
		{

			printf("����������\n");
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
			printf("�����������������\n");
		}
	}
	printf("��ϲ��ɨ�׳ɹ�����������������\n");
	DisplayBoard(mine, ROW, COL);
}
void mune()
{
	printf("*******************\n");
	printf("*****   ɨ��  *****\n");
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
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("�����д�����������\n");
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