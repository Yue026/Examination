#include <stdio.h>

//修改指针指向的数据
void modifydata(int *ptr,int newvalue)
{
    *ptr=newvalue;//修改ptr指向的数据
}

//修改指针本身
void modifypointer(int **ptr,int *newaddress)
{
    *ptr=newaddress;//让ptr指向新的地址
}

int main()
{
    int a=5,b=10;
    int *p=&a;
    int *q=&b;

    //修改p指向的数据
    modifydata(p,15);
    printf("a=%d\n",a);

    //修改p本身，让它指向q指向的地址，即b的地址
    modifypointer(&p,q);
    printf("*p=%d\n",*p);
    return 0;
}