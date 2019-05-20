#include <stdio.h>
#include <assert.h>

int my_strlen(const char *str) 
{
	assert(str);
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char *str)
{
	assert(str);
	char temp = 0;
	int len = my_strlen(str);
	if (len > 0)
	{
		temp = str[0];
		str[0] = str[len - 1];
		str[len - 1] = '\0';
		reverse_string(str + 1);
		str[len - 1] = temp;
	}
}
int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}