/*��һ��һά�����е�Ԫ����ת����ת��ָ�������еĵ�һ��Ԫ�������һ��Ԫ�ؽ��н�����
�ڶ���Ԫ���뵹���ڶ���Ԫ�ؽ��н������Դ����ƣ�ֱ��������м�һ��Ԫ��Ϊֹ��*/ 
#include <stdio.h>

void swap(int *a,int *b);
void reverseArray(int arr[],int size);

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};//ʾ������
    int size=sizeof(arr)/sizeof(arr[0]);//��������Ԫ�ظ���
    printf("Original array:");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    reverseArray(arr,size);//��ת����
    printf("Reversed array:");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

//��ת����ĺ���ʵ��
void reverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        //����Ԫ��
        /*int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;*/
        swap(&arr[start],&arr[end]);

        //�ƶ�ָ��
        start++;
        end--;
    }
}

//��������
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}