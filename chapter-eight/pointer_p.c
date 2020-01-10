#include <stdio.h>
int main()
{
    int i;
    int a[] = {1, 3, 5, 7, 9};
    int *num[] = {a, a + 1, a + 2, a + 3, a + 4};//定义指针数组并对其初始化
    int **p;//定义指向指针的指针。
    p = num;//将指针数组的首个指针的地址，赋值给指向指针变量的指针p
    for (i = 0; i < 5; i++)
    {
        printf("%d ", **p++);
    }
    printf("\n");
    getchar();
    return 0;
}