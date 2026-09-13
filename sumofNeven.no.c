#include <stdio.h>
int main()
{
    int num1,num2,sum=0;
    printf("till how much you have to do sum of n even  natural number\n");
    scanf("%d",&num2);
    for(num1=2;num1<=num2;num1+=2)
    {
        sum=sum+num1;
    }
    printf("sum of %d natural number is %d",num2,sum);
    return 0;
}