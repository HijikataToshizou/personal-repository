#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*************************\n");
	printf("*****1.paly***0.exit*****\n");
	printf("*************************\n");
}
void paly_game()
{
	int rand_num = rand() % 100;
	int tmp = 0;
	while (1)
	{
		printf("请输入你要猜的数字：<");
		scanf_s("%d", &tmp);
		if (tmp > rand_num)
		{
			printf("猜大了！\n");
		}
		else if (tmp < rand_num)
		{
			printf("猜小了！\n");
		}
		else
		{
			printf("恭喜你，猜对了！");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择：<\n");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			paly_game();
			break;
		case 0:
			exit(0);
			break;
		default:
			printf("选择错误！\n");
		}
	} while (input);
	return 0;
}
