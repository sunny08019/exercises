#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)
//#define N 3
struct Student
{
    int num;
    float score;
    struct Student *next;
};
int n;
// struct Student *inp()
// {
//     int i;
//     for(i=0;i<N;i++)
//     {
//         scanf("%d %f", &stu[i]->num, &stu[i]->score);
//     }
// }
struct Student *creat()
{
    n = 0;
    struct Student *head, *p1, *p2;
    p1 = malloc(LEN);
    scanf("%d %f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n = n + 1;
        if (n == 1)
            head = p1;
        else
            p2->next = p1;
        p2 = p1;
        p1 = malloc(LEN);
        scanf("%d %f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return head;
}
void print(struct Student *head)
{
    struct Student *pt;
    pt = head;
    if (head != NULL)
        do
        {
            printf("%d %5.2f\n", pt->num, pt->score);
            pt = pt->next;
        } while (pt != NULL);
}
int main()
{
    struct Student *pt;
    pt = creat();
    print(pt);
    system("pause");
    return 0;
}