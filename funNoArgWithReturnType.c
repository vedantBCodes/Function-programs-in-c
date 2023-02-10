#include<stdio.h>
int sum();
int main ()
{
    int s;
    s=sum();
    printf("Sum:%d",s);
}
int sum()
{
    int a,b,sum;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    sum=a+b;
    return sum;
}

