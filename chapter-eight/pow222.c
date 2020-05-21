#include<stdio.h>
float my_pow(float a, int b);
void main()
{

	float in1=2,in2=3,out=0;
 	printf("请输入： ");
	scanf("%f%f\n",&in1,&in2);
 	out=my_pow(in1,in2);
 
	printf("jieguo=%f",out);
	getchar();
    return 0;
}




float my_pow(float a, int b)
{
    int s=0,i;
    float r = 1;
    if(b == 0) return 1;
    if(b<0)
    {
        b*=-1;
        s = 1;
    }
    for(i = 0; i < b; i ++)
        r *= a;
    if(s)r=1/s;
    return r;
}