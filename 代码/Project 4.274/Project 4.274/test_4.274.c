#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a;
    int b;
    printf("请输入两个数用逗号隔开：");
    scanf("%d,%d", &a, &b);
    if (a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    while ((a%b)!=0)
    {
        int t = b;
        b = a%b;
        a = t;
    }
    printf("%d", b);
    system("pause");
    return 0;
}