#include<stdio.h>
int sum(int ,int );  //parameters OR Formal parameters
int main( )
{
    int a,b;
    sum(a,b);  //Arguments  OR Actual parameters
}
int sum(int a,int b)  //parameters OR Formal parameters
{
    //No need to declare the variables a and b again
    //because we just declared the variables while passing parameters
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Sum:%d",a+b);
}
