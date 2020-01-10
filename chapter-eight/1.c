#include <stdio.h>
#include <stdlib.h>
int main()
{
    void swap1(int *p1, int *p2);
    int *pointer_1, *pointer_2;
    int a,b;
    scanf("%d%d", &a, &b);
    pointer_1 = &a;
    pointer_2 = &b;
    if (a < b)
    {
     swap1(pointer_1, pointer_2);
    }
    printf("a=%d b=%d\n", a, b);
   //printf("*p1=%d *p2=%d\n", *pointer_1, *pointer_2); //输出p1和p2指向的变量值
    system("pause");
    return 0;
}
void swap1(int *p1, int *p2)
{
    int *temp;
    temp = p1;
    p1 = p2;
    p2 = temp;
}//此时外函数临时开辟了一个内存，实参与形参的地址并不相同。