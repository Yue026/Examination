/*将一个一维数组中的元素逆转。逆转是指将程序中的第一个元素与最后一个元素进行交换，
第二个元素与倒数第二个元素进行交换，以此类推，直到数组的中间一个元素为止。*/ 
#include <stdio.h>

void swap(int *a,int *b);
void reverseArray(int arr[],int size);

int main()
{
    int arr[]={0,1,2,3,4,5,6,7,8,9};//示例数组
    int size=sizeof(arr)/sizeof(arr[0]);//计算数组元素个数
    printf("Original array:");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    reverseArray(arr,size);//逆转数组
    printf("Reversed array:");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

//逆转数组的函数实现
void reverseArray(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<end)
    {
        //交换元素
        /*int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;*/
        swap(&arr[start],&arr[end]);

        //移动指针
        start++;
        end--;
    }
}

//交换两数
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}