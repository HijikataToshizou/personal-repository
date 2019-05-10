#include <string.h>
#include <windows.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码>>");
		scanf("%s", password);
		if (0 == strcmp(password, "123456"))
		{
			break;
		}
		else
		{
			printf("输入错误，请重新输入\n");

		}

	}
	if (i < 3)
	{
		printf("登录成功\n");
	}
	else
	{
		printf("登录失败\n");

	}
	system("pause");
	return 0;
}

