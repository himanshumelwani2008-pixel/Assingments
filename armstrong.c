#include <stdio.h>
int main()
{
    int num1,digits,sum=0,count=0;
    printf("enter any number\n");
    scanf("%d",&num1);
    while (num1>0)
    {
        digits=num1%10;
        
        num1=num1/10;
        sum=sum+digits;
        count++;

    }
    printf(" sum of number is %d\n",sum);
    printf(" digits in number are %d\n",count);
    if(sum=count*count)
    {
        printf("given number is armstrong");
    }
    else 
    {
        printf("given number is not armstrong");

    }
    return 0;
}