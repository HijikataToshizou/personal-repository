#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>       
#include<Windows.h>     

void menu()                     
{
	printf("****************************\n");
	printf("**** 欢迎来到三子棋游戏 ****\n");
	printf("**** 1、   进入游戏     ****\n");
	printf("**** 0、   退出游戏     ****\n");
	printf("****************************\n");
	printf("请输入:->");
}

void print_chessboard(char coord[][3])   
{       
	int i = 0;
	int index_x = 0;
	int index_y = 0;
	for (i = 1; i <= 153; i++)
	{
		char out_ch = ' ';
		if ((i % 51 == 20) || (i % 51 == 26) || (i % 51 == 32))
		{
			out_ch = coord[index_x][index_y];
			index_x++;
			if (index_x < 3)
			{
				index_x = 0;
				index_y++;
			}
		}
		else if ((i % 17 == 6) || (i % 17 == 12))
		{
			out_ch = '|';
		}
		else if ((i >= 35 && i <= 51 && i != 40 && i != 46) || \
			(i >= 86 && i <= 102 && i != 91 && i != 97))
		{
			out_ch = '_';
		}
		putchar(out_ch);
		if (i % 17 == 0)                  
		{
			printf("\n");
		}
	}
}
void winer(char coord[][3], int *flag);     

int computer(char coord[][3])                              
{
	int flag = 0;
	int index_x2 = 0;
	int index_y2 = 0;
	srand((unsigned)time(NULL));
	while (1)
	{
		index_x2 = 2 * rand() / RAND_MAX;                  
		index_y2 = 2 * rand() / RAND_MAX;
		if ((coord[index_x2][index_y2] != '*') && (coord[index_x2][index_y2] != 'o'))
		{                                                
			coord[index_x2][index_y2] = 'o';
			winer(coord, &flag);
			if (flag == 1)
			{
				return 1;
			}
			return 0;
		}
	}
}

int player(char coord[][3], int index_x1, int index_y1) 
{
	int flag = 0;
	int ret = 0;
	if ((coord[index_x1][index_y1] == '*') || (coord[index_x1][index_y1] == 'o'))
	{                                                      
		printf("此位置已有棋子，请重下!\n");
		return 0;
	}
	else
	{
		coord[index_x1][index_y1] = '*';
		winer(coord, &flag);
		if (flag == 1)
		{
			return 1;
		}
		ret = computer(coord);
		if (ret == 1)
		{
			return 1;
		}
		print_chessboard(coord);       
	}
	return 0;
}

void winer(char coord[][3], int *flag)           
{
	char line_ch[8][4] = { { coord[0][0], coord[1][1], coord[2][2] }, { coord[0][0], coord[0][1], coord[0][2] }, \
	{ coord[0][0], coord[1][0], coord[2][0] }, { coord[0][1], coord[1][1], coord[2][1] }, \
	{ coord[0][2], coord[1][2], coord[2][2] }, { coord[1][0], coord[1][1], coord[1][2] }, \
	{ coord[2][0], coord[2][1], coord[2][2] }, { coord[0][2], coord[1][1], coord[2][0] } };
	int i = 0;
	for (i = 0; i < 8; i++)
	{
		if (strcmp(line_ch[i], "***") == 0)   
		{
			print_chessboard(coord);       
			printf("\n恭喜您赢了!\n");
			*flag = 1;                     
			return;
		}
		else if (strcmp(line_ch[i], "ooo") == 0)
		{
			print_chessboard(coord);
			printf("\n很遗憾，您输了!\n");
			*flag = 1;
			return;
		}
		else
		{
			;
		}
	}
}

int main()
{
	while (1)
	{
		int num = 0;            
		int x = 0;
		int y = 0;
		int i = 4;             
		int ret = 0;            
		int is_play = 0;        
		char coordinate[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
		menu();
		scanf("%d", &num);
		if (num == 0)
		{
			printf("5秒后退出程序!\n");
			Sleep(5000);
			exit(0);
		}
		computer(coordinate);      
		print_chessboard(coordinate);
		while ((i))               
		{
			printf("请输入 X、Y 的坐标(0--2)来确定你下棋的位置："); 
			scanf("%d %d", &x, &y);
			ret = player(coordinate, x, y);
			if (ret == 1)
			{
				break;
			}
			i--;
		}
		printf("\n");
		printf("请选择接下来的操作:\n");
		printf("1、 再玩一次游戏    0、退出游戏系统\n");
		scanf("%d", &is_play);
		if (is_play == 0)
		{
			printf("5秒后退出程序!\n");
			Sleep(5000);
			exit(0);
		}
		else
		{
			system("cls");
		}
	}
	system("pause");
	return 0;
}