#include<stdio.h>
void sum(float ,float);
void main ()
{
    float x,y;
    printf("Enter two numbers:");
    scanf("%f %f",&x,&y);
    sum(x,y);
}
void sum(float a,float b)
{
    float sum;
    sum=a+b;
    printf("Sum%f",sum);
}


