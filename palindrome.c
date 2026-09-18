#include <stdio.h>
int main ()
{
    int num1,digits,original,rev=0;
    printf("choose any number\n");
    scanf("%d",&num1);
    original=num1;
    while(num1>0)
    {
        digits=num1%10;
        rev=rev*10 +digits;
        num1=num1/10;
    }
    if (original==rev)
    {
        printf("given number is palindrome");
    }
    else 
    {
        printf("given number is not palindrome");
    }
    return 0;
}