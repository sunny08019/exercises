#include<stdio.h>
#include<stdlib.h>
#define N 3 //宏定义 N = 3
struct Student
{
    int num;
    int score;
    struct Student *next; //定义指向结构体变量的指针
}stu[N];//定义结构体数组
int main()
{
    int i;
    struct Student *head,*p;//定义结构体指针
    stu[0].num=111;stu[0].score=125;stu[1].num=112;stu[1].score=130;stu[2].num=113;stu[2].score=137;//对结构体数组赋值
   // head=&a;a.next=&b;b.next=&c;c.next=NULL;
   for ( i = 0; i < N-1; i++)
   {
       stu[i].next=&stu[i+1];
   }
   head=&stu[0];
   stu[2].next=NULL;
    p=head;
    for ( ; p != NULL;)
    {
        printf("%d %d\n",p->num,p->score);
        p=p->next;
    }
    system("pause");
    return 0;
}