#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	int n, i, sum = 1;
	printf("������һ������:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		sum *= i;
	}
	printf("%d\n", sum);
	return 0;
}