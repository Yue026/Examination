#include <stdio.h>

int *pointer(int *a)
{
    int *temp=a;
    *temp+=2;
    return temp;
}

void pointe(int *a)
{
    int *temp=a;
    *temp+=2;
}

void point(int *a)
{
    *a+=3;
}

int main()
{
    int q=1;
    int *p=&q;
    printf("*p=%d\n",*p);
    
    p=pointer(p);
    printf("*p=%d\n",*p);

    pointe(p);
    printf("*p=%d\n",*p);

    point(p);
    printf("*p=%d\n",*p);
    return 0;
}