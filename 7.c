/*将一个一维数组中的元素逆转。逆转是指将程序中的第一个元素与最后一个元素进行交换，
第二个元素与倒数第二个元素进行交换，以此类推，直到数组的中间一个元素为止。*/ 
#include <stdio.h>
#define SIZE 6

int main()
{
    int array1[SIZE];
    printf("Please input %d numbers:\n",SIZE);
    for(int i=0;i<SIZE;i++)
        scanf("%d",&array1[i]);
    printf("逆转前数组元素为：");
    for(int i=0;i<SIZE;i++)
        printf("%d ",array1[i]);
    printf("\n逆转后数组元素为：");
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