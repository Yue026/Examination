// 数组插入一个元素
#include <stdio.h>
#define LEN 15

int main()
{
    int a1[LEN],num,pos,inserelem;
    printf("请输入元素个数：");
    scanf("%d",&num);
    if(num<=0||num>15)
    {
        printf("元素个数必须大于0且不能超出边界15个\n");
        return 1;
    }
    printf("请输入数组元素：");
    for(int i=0;i<num;i++)
        scanf("%d",&a1[i]);
    printf("数组元素为：");
    for(int i=0;i<num;i++)
        printf("%d ",a1[i]);
    printf("\n");
    printf("请输入要插入元素的位置(0-%d):",num);
    scanf("%d",&pos);
    if(pos<0||pos>num)
    {
        printf("要插入的位置不存在！\n");
        return 1;
    }       
    for(int i=num-1;i>=pos;i--)
        a1[i+1]=a1[i];
    printf("请输入要插入的元素：");
    scanf("%d",&inserelem);
    a1[pos]=inserelem;
    printf("插入后数组元素为：");
    for(int i=0;i<num+1;++i)
        printf("%d ",a1[i]); 
    return 0;
}