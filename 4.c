#include <stdio.h>

void swap(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int m,n;
    printf("Please input two numbers:\n");
    scanf("%d %d",&m,&n);
    swap(&m,&n);
    printf("m=%d n=%d\n",m,n);
    return 0;
}