#include <stdio.h>
#include <stdlib.h>
int main()
{
    void swap1(int *pointer_1, int *pointer_2);
    int *p1, *p2, a, b;
    scanf("%d%d", &a, &b);
    p1 = &a;
    p2 = &b;
    if (a < b)
        swap1(p1, p2);
    printf("a=%d b=%d\n", a, b);
    printf("*p1=%d *p2=%d\n", *p1, *p2); //输出p1和p2指向的变量值
    system("pause");
    return 0;
}
void swap1(int *pointer_1, int *pointer_2)
{
    int temp;
    temp = *pointer_1;
    *pointer_1 = *pointer_2;
    *pointer_2 = temp;
}
