#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct Student
    {
        int num;
        char name[20];
        float score;
    } student1, student2;
    scanf("%d%s%f", &student1.num, student1.name, &student1.score);//输入时 name本身就代表地址，所以不用加&
    scanf("%d%s%f", &student2.num, student2.name, &student2.score);
    if (student1.score > student2.score)
    {
        printf("%d %s %f", student1.num, student1.name, student1.score);
    }
    else if (student1.score < student2.score)
    {
        printf("%d %s %f", student2.num, student2.name, student2.score);
    }
    else
    {
        printf("%d %s %f", student1.num, student1.name, student1.score);
        printf("%d %s %f", student2.num, student2.name, student2.score);
    }
    system("pause");
    return 0;
}