#include <stdio.h>
int main()
{
    int i,num1,num2,x,factors;
    printf("how many numbers you want to check for prime\n");
    scanf("%d",&x);
    for (i=1;i<=x;i++)
    {
        printf("choose any number you want to check for prime\n");
        scanf("%d",&num1);
        printf("factors of given numbers are:\n");
          for(num2=1;num2<=num1;num2++)
    {
        if (num1%num2==0)
        {
            printf("%d\n",num2);
            factors++;
            
        }
    }
    if (factors==2)
    {
        printf(" the given number is prime.......\n");
    }
    else 
    {
        printf("given number is not prime......\n");
    }
    }
    return 0;
}