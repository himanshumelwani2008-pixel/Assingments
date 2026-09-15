#include <stdio.h>
int main()
{
    int num1,digits,count=0;
    printf("choose any number\n");
    scanf("%d",&num1);
    while (num1>0)
    {
        digits = num1%10;
         num1=num1/10;
        count++;
    }
    printf("%d",count);
    return 0;
}