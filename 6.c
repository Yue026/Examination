// ������һά�����еĶ�ӦԪ�ص�ֵ��Ӻ���ʾ����
#include <stdio.h>
#define SIZE 5

int main()
{
    int array1[SIZE]={1,2,3,4,5};
    int array2[SIZE]={9,8,7,6,5};
    for(int i=0;i<SIZE;i++)
        printf("%d + %d = %d\n",array1[i],array2[i],array1[i]+array2[i]);
    return 0;
}