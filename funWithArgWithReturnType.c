#include<stdio.h>
int sum(int ,int);
int main()
{
    int a,b,s;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    s=sum(a,b);
    printf("Sum:%d",s);
}
int sum(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
