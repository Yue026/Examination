/*将一个一维数组中的元素逆转。逆转是指将程序中的第一个元素与最后一个元素进行交换，
第二个元素与倒数第二个元素进行交换，以此类推，直到数组的中间一个元素为止。*/ 
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
    printf("逆转前数组为：");
    for(int i=0;i<Length;i++)
        printf("%d ",a1[i]);
    printf("\n逆转后数组为:");
    for(int i=0;i<Length/2;i++)
        exchange(&a1[i],&a1[Length-1-i]);
    for(int i=0;i<Length;i++)
        printf("%d ",a1[i]);
    return 0;
}