#include <stdio.h>
int main()
{
    union D {
        int i;
        char c;
        float f;
    } a, b, c;
    a.i = 97;//对共用体进行初始化
    a.f=1.5;//可以初始化，但是只能初始化一个常量；
    printf("%d %c %f", a.i, a.c, a.f);
    getchar();
    return 0;
}