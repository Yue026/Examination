// 测试退出程序exit()函数
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("请输入n1的值:\n");
    scanf("%d",&n1);
    if(n1==9)
    {
        printf("9代表退出程序\n");
        exit(1);
    }
    printf("n1=%d\n",n1);
    return 0;
}