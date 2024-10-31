// 插入排序
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);
void fallsort(int *a,int leng);
void InsertSort(int **arr,int *n,int element);

int main()
{
    int len,elem;
    printf("请输入数组长度：");
    scanf("%d",&len);
    int *arr=(int *)malloc(len*sizeof(int));
    if(arr==NULL)
    {
        fprintf(stderr,"Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    printf("请输入数组元素：");
    for(int i=0;i<len;++i)
        scanf("%d",&arr[i]);
    printf("原始数组为：");
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n\n");
    fallsort(arr,len);
    printf("降序后：\n");
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n\n");
    printf("请输入要插入元素的值：");
    scanf("%d",&elem);
    InsertSort(&arr,&len,elem);
    printf("插入后数组为：");
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void fallsort(int *a,int leng)
{
    for(int i=0;i<leng-1;++i)
    {
        for(int j=0;j<leng-i-1;++j)
        {
            if(a[j]<a[j+1])
                swap(&a[j],&a[j+1]);
        }
    }
}

//直接插入排序
void InsertSort(int **arr,int *n,int element)
{
    int *temp=realloc(*arr,(*n+1)*sizeof(int));
    if(temp==NULL)
    {
        fprintf(stderr,"Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    *arr=temp;//更新原始指针变量
    int i;
    //寻找插入的位置
    for(i=*n-1;i>=0 && (*arr)[i]<element;--i);
    //将插入位置及之后的元素向后移一位
    for(int j=*n;j>i+1;--j)
        (*arr)[j]=(*arr)[j-1];
    (*arr)[i+1]=element;
    (*n)++;
}  