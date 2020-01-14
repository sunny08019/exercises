#include <stdio.h>
#include <stdlib.h>
#define N 3
struct Student
{
    int num;
    char name[20];
    float score[3]; //三门课的成绩
    float aver;     //平均成绩
} stu[N];
void input(struct Student stu[]) //结构体变量作形参
{
    int i;
    for (i = 0; i < N; i++)
    {
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]); //输入学号姓名，三科成绩
        stu[i].aver = (stu[i].score[0], stu[i].score[1], stu[i].score[2]) / 3.0;                                 //求平均成绩
    }
}
struct Student max(struct Student stu[])
{
    int i, m = 0;
    for (i = 0; i < N; i++)
    {
        if (stu[i].aver > stu[m].aver)
            m = i;
    }
    return stu[m];
}
void print(struct Student stud)
{
    
    printf("The students with the highest grades are:\n");
    printf("num:%d name:%s scare:%f %f %f aver:%f ", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver);
}
int main()
{
    void print(struct Student stud);
    struct Student stu[N],*p;
    p = stu;
    input(p);
    print(max(p));
    system("pause");
    return 0;
}