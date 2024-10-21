/*将一个一维数组中的元素逆转。逆转是指将程序中的第一个元素与最后一个元素进行交换，
第二个元素与倒数第二个元素进行交换，以此类推，直到数组的中间一个元素为止。*/ 
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
