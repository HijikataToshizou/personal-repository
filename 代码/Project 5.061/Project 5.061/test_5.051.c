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
		printf("��������Ҫ�µ����֣�<");
		scanf_s("%d", &tmp);
		if (tmp > rand_num)
		{
			printf("�´��ˣ�\n");
		}
		else if (tmp < rand_num)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�");
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("��ѡ��<\n");
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
			printf("ѡ�����\n");
		}
	} while (input);
	return 0;
}
