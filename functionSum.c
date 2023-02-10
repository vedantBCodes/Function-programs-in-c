#include<stdio.h>
int sum();
int main()
{
    printf("calling sum function\n");
    sum();
}
int sum()
{
    int a,b,sum; //variables declared inside the function can't be accessed from ouside the function
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum:%d",sum);
}
