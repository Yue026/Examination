// �����˳�����exit()����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1;
    printf("������n1��ֵ:\n");
    scanf("%d",&n1);
    if(n1==9)
    {
        printf("9�����˳�����\n");
        exit(1);
    }
    printf("n1=%d\n",n1);
    return 0;
}