#include <stdio.h>
int main()//结构体学习
{
    int sum;
    struct Student //声明结构体类型
    {
        int num; //6-11行是结构体成员
        char name[20];
        char sex;
        int age;
        float score;
        char addr[30];
    } student1, student2; //定义结构体变量
    student2 = {10101, "XiaoMing", "M", 18, 145, "Henan"};
    student1 = student2;                   //同类的结构体变量可以互相赋值
    sum = student1.score + student2.score; //对结构体变量的成员可以进行加法运算
    student1.agg++;//自加运算。
    scanf("%d",&student1.agg);//可以引用结构体变量的成员
    printf("%o",&student1);//也可以引用结构体变量。
}
