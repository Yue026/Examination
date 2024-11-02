#include <stdio.h>

void point(int **ptr,int *p)
{
    *ptr=p;
}

int main()
{
    int a=5,b=6;
    int *p,*q;
    p=&a;
    q=&b;
    printf("*p=%d\n",*p);
    printf("*q=%d\n",*q);
    point(&p,q);
    printf("*p=%d\n",*p);
    printf("*q=%d\n",*q);
    return 0;
}