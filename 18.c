// ͨ��ָ���޸�ָ�����ֵ
#include <stdio.h>  

void poiter(int* a)
{
    *a+=5;
}

int main()
{
    int b=2;
    printf("b=%d\n",b);
    poiter(&b);   
    printf("b=%d\n",b);
    return 0;
}