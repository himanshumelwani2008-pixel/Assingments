#include <stdio.h>
int main()
{
    int num1=0,num2=1,sum=0,i,x;
    printf("choose till how many number you to print in fibonacci series\n");
    scanf("%d",&x);

    for(i=1;i<=x;i++)
    {
        printf("%d\n",num1);
        sum=num1+num2;
        num1=num2;
        num2=sum;
    
    }
    return 0;
}