#include <stdio.h>

int main()
{
    int a[10];
    printf("Please input ten integer numbers:\n");
    for(int i=0;i<10;i++)
    
        scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);   
    putchar('\n');
    return 0;
}