// �Ӽ�������n��ʵ����n�ɼ������룩�������ŵ�һ��һά������ ��̬����
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("������ʵ���ĸ�����\n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("ʵ���ĸ����������0\n");
        return 1;
    }

    double *arr=(double *)malloc(n*sizeof(double));
    if(arr == NULL)
    {
        printf("�ڴ����ʧ�ܣ��˳�����\n");
        exit(1);
    }
    printf("������%d��ʵ��:\n",n);
    for(int i=0;i<n;i++)
        scanf("%lf",&arr[i]);
    printf("��%d��ʵ����:\n",n);
    for(int i=0;i<n;i++)
        printf("%lf ",arr[i]);
    printf("\n");
    free(arr);
    return 0;
}