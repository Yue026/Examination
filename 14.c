// �Ӽ�������n��ʵ����n�ɼ������룩�������ŵ�һ��һά�����У���������������Ԫ��
#include <stdio.h>

void swap(int *a,int *b);
void sort(int arr[],int length);

int main()
{
    int a1[]={2,4,6,8,9,0};
    int len=sizeof(a1)/sizeof(a1[0]);
    printf("ԭ���У�");
    for(int i=0;i<len;i++)
        printf("%d ",a1[i]);
    printf("\n");
    sort(a1,len);
    printf("�����");
    for(int i=0;i<len;i++)
        printf("%d ",a1[i]);
    printf("\n");
    return 0;
}

void swap(int *a,int *b)
{
    int temp= *a;
    *a = *b;
    *b = temp;
} 

void sort(int arr[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1-i;j++)
        {
            if(arr[j]<arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
}