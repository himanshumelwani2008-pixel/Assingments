#include <stdio.h>
int main()
{
    int num1,num2,i,sum=0;
    printf("choose any number\n");
    scanf("%d",&num1);
    num2=num1;
    for (i=1;i<num1;i++)
    {
        if (num1%i==0)
        {
            printf("%d\n",i);
            sum=sum+i;
        }
    }
    printf(" sum of number is %d\n",sum);
    if (sum==num2)
    {
        printf("the number is perfect number");
    }
    else 
    {
        printf("the number is not perfect");
    }
    return 0;
}