#include<stdio.h>
factorial(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("Factorial of %d is %d",num,fact);
}
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    factorial(num);
}
