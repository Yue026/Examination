#include <stdio.h>

//�޸�ָ��ָ�������
void modifydata(int *ptr,int newvalue)
{
    *ptr=newvalue;//�޸�ptrָ�������
}

//�޸�ָ�뱾��
void modifypointer(int **ptr,int *newaddress)
{
    *ptr=newaddress;//��ptrָ���µĵ�ַ
}

int main()
{
    int a=5,b=10;
    int *p=&a;
    int *q=&b;

    //�޸�pָ�������
    modifydata(p,15);
    printf("a=%d\n",a);

    //�޸�p��������ָ��qָ��ĵ�ַ����b�ĵ�ַ
    modifypointer(&p,q);
    printf("*p=%d\n",*p);
    return 0;
}