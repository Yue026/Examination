// 冒泡排序法从小到大
#include <stdio.h>

int main()
{
    int a[10]={90,61,92,79,45,67,86,95,63,79};
    int i,j,temp;
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}