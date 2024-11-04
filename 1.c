// 输入a和b两个整数，按先大后小的顺序输出a和b。
#include <stdio.h>
/*用指针的方法来处理这个问题。不交换整型变量的值，而是交换两个指针变量。*/
int main()
{
    int *p1,*p2,*p,a,b;
    printf("integer numbers:");
    scanf("%d,%d",&a,&b);
    p1=&a;p2=&b;
    if(a<b)
    {
        p=p1;
        p1=p2;
        p2=p;
    }
    printf("a=%d,b=%d\n",a,b);
    printf("*p1=%d,*p2=%d\n",*p1,*p2);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
//注意：
//1.a和b的值并未交换，它们仍保持原值。
//2.但p1和p2的值改变了。p1的值原为&a，后来变成&b，p2原值为&b，后来变成&a。
//3.在输出*p1和*p2时，实际上是输出变量b和a的值。