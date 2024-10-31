// ��������
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);
void fallsort(int *a,int leng);
void InsertSort(int **arr,int *n,int element);

int main()
{
    int len,elem;
    printf("���������鳤�ȣ�");
    scanf("%d",&len);
    int *arr=(int *)malloc(len*sizeof(int));
    if(arr==NULL)
    {
        fprintf(stderr,"Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    printf("����������Ԫ�أ�");
    for(int i=0;i<len;++i)
        scanf("%d",&arr[i]);
    printf("ԭʼ����Ϊ��");
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n\n");
    fallsort(arr,len);
    printf("�����\n");
    for(int i=0;i<len;++i)
        printf("%d ",arr[i]);
    printf("\n\n");
    printf("������Ҫ����Ԫ�ص�ֵ��");
    scanf("%d",&elem);
    InsertSort(&arr,&len,elem);
    printf("���������Ϊ��");
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

//ֱ�Ӳ�������
void InsertSort(int **arr,int *n,int element)
{
    int *temp=realloc(*arr,(*n+1)*sizeof(int));
    if(temp==NULL)
    {
        fprintf(stderr,"Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    *arr=temp;//����ԭʼָ�����
    int i;
    //Ѱ�Ҳ����λ��
    for(i=*n-1;i>=0 && (*arr)[i]<element;--i);
    //������λ�ü�֮���Ԫ�������һλ
    for(int j=*n;j>i+1;--j)
        (*arr)[j]=(*arr)[j-1];
    (*arr)[i+1]=element;
    (*n)++;
}  