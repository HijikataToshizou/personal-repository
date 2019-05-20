#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int my_strlen(const char *str)
{
	assert(str != NULL);      
	if (*str == '\0')
		return 0;
	else
		return 1 + my_strlen(str + 1);   
}
int main()
{
	char string[1024] = "ajaifsj";
	printf("%d\n", my_strlen(string));
	system("pause");
	return 0;
}
