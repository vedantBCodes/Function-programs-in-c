#include<stdio.h>
void sum();
main()
{
    sum();
}
void sum()
{
    int a,b,sum;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("Sum:%d",sum);
}
