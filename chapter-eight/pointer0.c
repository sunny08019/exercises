#include <stdio.h>
int main()
{
    int a = 10;
    int *pointer_1 = &a; //指针变量初始化，等同于  int *pointer_1;  pointrt_1=&a;
    printf("%d\n", *pointer_1); //输出是10；
    *pointer_1 = 100;         //将整数100赋值给*pointer_1所指向的变量a，即a=100
    printf("a=%d\n", a);
    getchar();
    return 0;
}