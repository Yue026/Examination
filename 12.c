// 从键盘输入n个实数（n由键盘输入）并将其存放到一个一维数组中 动态分配
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("请输入实数的个数：\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("实数的个数必须大于0\n");
        return 1;
    }

    double *arr=(double *)malloc(n*sizeof(double));
    if(arr == NULL)
    {
        printf("内存分配失败，退出程序\n");
        exit(1);
    }
    printf("请输入%d个实数:\n",n);
    for(int i=0;i<n;i++)
        scanf("%lf",&arr[i]);
    printf("这%d个实数是:\n",n);
    for(int i=0;i<n;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}