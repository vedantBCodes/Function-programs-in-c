#include<stdio.h>
int factorial(int num)
{
    int i,fact=1;
     if(num==1)
     {
         return 1;
     }
     else
     {
         return num*factorial(num-1);
     }
}
int main()
{
    int num,fact;
    printf("Enter a number:");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d is %d",num,fact);
}

