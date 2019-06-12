#define _CRT_SECURE_NO_WARNINGS

void play(int x)
{
	if (x != 0)
	{
		printf("%d", x % 10);
		play(x / 10);
	}

	//printf("%d", x);
}

int main()
{
	int i, j, k;

	scanf("%d", &k);
	play(k);
	system("pause");
	return 0;
}