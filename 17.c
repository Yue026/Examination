// �������һ��Ԫ��
#include <stdio.h>
#define LEN 15

int main()
{
    int a1[LEN],num,pos,inserelem;
    printf("������Ԫ�ظ�����");
    scanf("%d",&num);
    if(num<=0||num>15)
    {
        printf("Ԫ�ظ����������0�Ҳ��ܳ����߽�15��\n");
        return 1;
    }
    printf("����������Ԫ�أ�");
    for(int i=0;i<num;i++)
        scanf("%d",&a1[i]);
    printf("����Ԫ��Ϊ��");
    for(int i=0;i<num;i++)
        printf("%d ",a1[i]);
    printf("\n");
    printf("������Ҫ����Ԫ�ص�λ��(0-%d):",num);
    scanf("%d",&pos);
    if(pos<0||pos>num)
    {
        printf("Ҫ�����λ�ò����ڣ�\n");
        return 1;
    }       
    for(int i=num-1;i>=pos;i--)
        a1[i+1]=a1[i];
    printf("������Ҫ�����Ԫ�أ�");
    scanf("%d",&inserelem);
    a1[pos]=inserelem;
    printf("���������Ԫ��Ϊ��");
    for(int i=0;i<num+1;++i)
        printf("%d ",a1[i]); 
    return 0;
}