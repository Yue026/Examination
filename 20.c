
#include <stdio.h>

void pointer(int *a)
{
    int temp=9;
    a=&temp;
    temp+=*a;
    printf("temp=%d\n",temp);
    printf("*a=%d\n",*a);
}

int main()
{
    int b=2;
    int *ar=&b;
    printf("*ar=%d\n",*ar);
    pointer(ar);
    printf("*ar=%d\n",*ar);
    return 0;
}