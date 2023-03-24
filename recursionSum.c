#include<stdio.h>
int sumOfFirstN(int num)
{
    if(num>0)
    {
        return num+sumOfFirstN(num-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    sum=sumOfFirstN(num);
    printf("Sum of first %d natural numbers are:%d",num,sum);
}
