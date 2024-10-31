/*�Ӽ�������n��ʵ����n�ɼ������룩�������ŵ�һ��һά�����У���������������Ԫ�غ�
�Ӽ��̶���һ���������ʵ����������뵽�����к��ʵ�λ�á�*/
#include <stdio.h>
#include <stdlib.h>

void swap(double *a,double *b);
void fallsort(double *a,int n);
double* insert(double *a,int *len,double realn);

int main()
{
    int len;
    printf("������ʵ���ĸ�����");
    scanf("%d",&len);
    if(len<=0)
    {
        printf("ʵ���ĸ����������0\n");
        return 1;
    }
    double *arr=(double *)malloc(len*sizeof(double));
    if(arr==NULL)
    {
        printf("�ڴ����ʧ�ܣ��˳�����\n");
        exit(1);
    }
    printf("������%d��ʵ��:\n",len);
    for(int i=0;i<len;i++)
        scanf("%lf",&arr[i]);
    printf("ԭ����Ϊ��");
    for(int i=0;i<len;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    printf("�����Ϊ��");
    fallsort(arr,len);
    for(int i=0;i<len;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    printf("������һ��ʵ����");
    double realnum;
    scanf("%lf",&realnum);
    arr=insert(arr,&len,realnum);
    printf("����������Ϊ��");
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
    //Ĭ�������Ѱ��������кã���ʱ����һ��Ԫ���Ҳ��ƻ�ԭ��˳��Ѱ�Ҳ���λ��
    for(i=*len-1;i>=0 && temp[i]<realn;--i)
    {
        
    }
    //������λ�ü�֮���Ԫ�������һλ
    for(int j=*len;j>i+1;--j)//�����λ����i�ĺ�һλ
        temp[j]=temp[j-1];
    temp[i+1]=realn;
    (*len)++;
    return temp;//�����µ�����ָ��
}