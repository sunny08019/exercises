#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
struct Student
{
    int num;
    float scroce;
    struct Student *next;
};
int n;
struct Student *creat()
{
    n = 0;
    struct Student *head, *p1, *p2;
    p1 = p2 = (struct Student *)malloc(LEN); //开辟一个新单元
    scanf("%d %f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n++;           //n定义输入次数
        if (n == 1)    //若第一次输入
            head = p1; //令头地址指向第一个结构体
        else
            p2->next = p1;                  //将下一个结构体地址赋值给上一个结构体的指针
        p2 = p1;                            //令p2 指向p1 也就是将p2指向下一个结构体的首地址。
        p1 = (struct Student *)malloc(LEN); //开辟新内存，
        scanf("%d %f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return head;
}
int main()
{
    struct Student *pt;
    pt = creat();
    do
    {
        printf("%d %5.2f\n", pt->num, pt->score);
        pt = pt->next;
    } while (pt != NULL);
        system("pause");
    return 0;
}
