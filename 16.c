/*从键盘输入n个实数（n由键盘输入）并将其存放到一个一维数组中，按降序排列数组元素后，
从键盘读入一个待插入的实数，将其插入到数组中合适的位置。*/
#include <stdio.h>
#include <stdlib.h>

void swap(double *a,double *b);
void fallsort(double *a,int n);
double* insert(double *a,int *len,double realn);

int main()
{
    int len;
    printf("请输入实数的个数：");
    scanf("%d",&len);
    if(len<=0)
    {
        printf("实数的个数必须大于0\n");
        return 1;
    }
    double *arr=(double *)malloc(len*sizeof(double));
    if(arr==NULL)
    {
        printf("内存分配失败，退出程序\n");
        exit(1);
    }
    printf("请输入%d个实数:\n",len);
    for(int i=0;i<len;i++)
        scanf("%lf",&arr[i]);
    printf("原序列为：");
    for(int i=0;i<len;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    printf("降序后为：");
    fallsort(arr,len);
    for(int i=0;i<len;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    printf("请输入一个实数：");
    double realnum;
    scanf("%lf",&realnum);
    arr=insert(arr,&len,realnum);
    printf("插入后的序列为：");
    for(int i=0;i<len;++i)
        printf("%lf ",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}

void swap(double *a,double *b)
{
    double temp=*a;
    *a=*b;
    *b=temp;
}

void fallsort(double *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]<a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

double* insert(double *a,int *len,double realn)
{
    double *temp=(double*)realloc(a,(*len+1)*sizeof(double));
    if(temp==NULL)
    {
        fprintf(stderr,"Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    int i;
    //默认序列已按降序排列好，此时插入一个元素且不破坏原有顺序，寻找插入位置
    for(i=*len-1;i>=0 && temp[i]<realn;--i)
    {
        
    }
    //将插入位置及之后的元素向后移一位
    for(int j=*len;j>i+1;--j)//插入的位置在i的后一位
        temp[j]=temp[j-1];
    temp[i+1]=realn;
    (*len)++;
    return temp;//返回新的数组指针
}