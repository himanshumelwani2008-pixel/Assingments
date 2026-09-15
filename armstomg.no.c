#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,num3,digits,sum=0,count=0,power,i;
    printf("choose any  number\n");
    scanf("%d",&num1);
    num2=num1;
    num3=num1;
    while(num1>0)
    {
        digits=num1%10;
        num1=num1/10;
        count++;
    }
    printf(" digits in given number are %d\n",count);
    num1=num2;
    while(num1>0)
    {
        digits=num1%10;
        power = 1;
        for(i=1;i<=count;i++)
        {
            power=power*digits;
        }
        sum=sum+power;

        num1=num1/10;
    }
    printf(" sum of power of digits are %d\n",sum);
    if (sum=num3)
    {
        printf("since sum of power of digits is equal to original number\ngiven number is armstrong",num3);

    }
    else
    {
        printf("given number is not armstrong");
    }
    
}