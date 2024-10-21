// 键盘输入10位同学的英语成绩（数据类型为int型），求其中的最大值、最小值和平均值
 #include <stdio.h>

int main()
{
    int a[10], i, maxi, mini, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Please input the score of a student(integer):\n");
        scanf_s("%d", &a[i]);
    }
    maxi = mini = a[0];
    for (i = 0; i < 10; i++)
    {
        sum += a[i];
        if (a[i] > maxi)     
            maxi = a[i];
        if (a[i] < mini)
            mini = a[i];
    }
    printf("max=%d min=%d\n", maxi, mini);
    printf("aver=%f\n", (float)sum / 10);

    return 0;
} 