#include <string.h>
#include <windows.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������>>");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
		{
			printf("�����������������\n");

		}

	}
	if (i < 3)
	{
		printf("��¼�ɹ�\n");
	}
	else
	{
		printf("��¼ʧ��\n");

	}
	system("pause");
	return 0;
}

