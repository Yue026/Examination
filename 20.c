// ����forѭ����i++��++i������
#include <stdio.h>

int main()
{
    int i;
    for(i=0;i<10;++i)
    {
        printf("i=%d ",i);
        printf("hello ");
        printf("i=%d\n",i);
    }
    printf("i=%d\n",i);
    int a=0;
    printf("a++=%d\n",a++);
    printf("a=%d\n",a);

    return 0;
}