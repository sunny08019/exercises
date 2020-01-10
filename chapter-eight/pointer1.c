#include<stdio.h>
int main ()
{
    int i=10,j=20;//定义整型变量
    int *pointer_1,*pointer_2;//定义指向整型数据的指针变量
    pointer_1=&i;//将整型变量i的地址放到指针变量pointer_1中
    pointer_2=&j;
   // int *pointer_1=&i,*pointer_2=&j;
    printf("a=%d b=%d\n",i,j);
    printf("*pointer_1=%d\n*pointer_2=%d\n",*pointer_1,*pointer_2);//输出i，j的值
    printf("*pointer_1=%d\n*pointer_2=%d\n",pointer_1,pointer_2);//输出指针变量的值，即i，j的（起始）地址
    getchar();
    return 0;
}