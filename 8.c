/*��һ��һά�����е�Ԫ����ת����ת��ָ�������еĵ�һ��Ԫ�������һ��Ԫ�ؽ��н�����
�ڶ���Ԫ���뵹���ڶ���Ԫ�ؽ��н������Դ����ƣ�ֱ��������м�һ��Ԫ��Ϊֹ��*/ 
#include <stdio.h>
#define Length 10

void exchange(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a1[Length];
    printf("Please input array element:\n");
    for(int i=0;i<Length;i++)
        scanf("%d",&a1[i]);
    printf("��תǰ����Ϊ��");
    for(int i=0;i<Length;i++)
        printf("%d ",a1[i]);
    printf("\n��ת������Ϊ:");
    for(int i=0;i<Length/2;i++)
        exchange(&a1[i],&a1[Length-1-i]);
    for(int i=0;i<Length;i++)
        printf("%d ",a1[i]);
    return 0;
}