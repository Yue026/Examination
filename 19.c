// 修改指针指向的数据
#include <stdio.h>

void pointer(int *a)
{
    *a+=2;
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