/*��һ��һά�����е�Ԫ����ת����ת��ָ�������еĵ�һ��Ԫ�������һ��Ԫ�ؽ��н�����
�ڶ���Ԫ���뵹���ڶ���Ԫ�ؽ��н������Դ����ƣ�ֱ��������м�һ��Ԫ��Ϊֹ��*/ 
#include <stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void reverseArray(int arr[],int start,int end)
{
    while(start<end)
    {
        swap(&arr[start],&arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int length=sizeof(arr)/sizeof(arr[0]);
    printf("Original array:");
    for(int i=0;i<length;i++)
        printf("%d ",arr[i]);
    printf("\n");
    reverseArray(arr,0,length-1);
    printf("Reversed array:");
    for(int i=0;i<length;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}