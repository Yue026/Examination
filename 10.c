/*将一个一维数组中的元素逆转。逆转是指将程序中的第一个元素与最后一个元素进行交换，
第二个元素与倒数第二个元素进行交换，以此类推，直到数组的中间一个元素为止。*/ 
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