/*��һ��һά�����е�Ԫ����ת����ת��ָ�������еĵ�һ��Ԫ�������һ��Ԫ�ؽ��н�����
�ڶ���Ԫ���뵹���ڶ���Ԫ�ؽ��н������Դ����ƣ�ֱ��������м�һ��Ԫ��Ϊֹ��*/ 
#include <stdio.h>
#define SIZE 6

int main()
{
    int array1[SIZE];
    printf("Please input %d numbers:\n",SIZE);
    for(int i=0;i<SIZE;i++)
        scanf("%d",&array1[i]);
    printf("��תǰ����Ԫ��Ϊ��");
    for(int i=0;i<SIZE;i++)
        printf("%d ",array1[i]);
    printf("\n��ת������Ԫ��Ϊ��");
    for(int i =0;i<SIZE/2;i++)
    {
        int temp;
        temp=array1[i];
        array1[i]=array1[SIZE-1-i];
        array1[SIZE-1-i]=temp;
    }        
    for(int i=0;i<SIZE;i++)
        printf("%d ",array1[i]);
    return 0;
}