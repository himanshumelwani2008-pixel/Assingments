#include <stdio.h>
int main()
{
    int num1,digits;
    printf("choose any number\n");
    scanf("%d",&num1);
    while (num1>0)
    {
        digits = num1%10;
        printf("%d",digits);
         num1=num1/10;
        
    }
    
    return 0;
}