// 将两个一维数组中的对应元素的值相加后显示出来
#include <stdio.h>

int main()
{
    int array1[]={1,2,3,4,5},array2[]={9,8,7,6,5};
    for(int i=0;i<5;i++)
        printf("%d ",array1[i]+array2[i]);
    return 0;
}