/*��һ��һά�����е�Ԫ����ת����ת��ָ�������еĵ�һ��Ԫ�������һ��Ԫ�ؽ��н�����
�ڶ���Ԫ���뵹���ڶ���Ԫ�ؽ��н������Դ����ƣ�ֱ��������м�һ��Ԫ��Ϊֹ��*/ 
#include <stdio.h>
#define length 7

void reverseArray(int arr[],int len);
void swap(int *a,int *b);

int main()
{
    int arr[length];
    printf("Please input array element:\n");
    for(int i=0;i<length;i++)
        scanf("%d",&arr[i]);
    printf("Original array:");
    for(int i=0;i<length;i++)
        printf("%d ",arr[i]);
    printf("\n");
    reverseArray(arr,length);
    printf("Reversed array:");
    for(int i=0;i<length;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

void reverseArray(int arr[],int len)
{
    for(int i=0;i<len/2;i++)
    {
        /*temp=arr[i];
        arr[i]=arr[len-1-i];
        arr[len-1-i]=temp;*/
        swap(&arr[i],&arr[len-1-i]);
    }
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
