#include <stdio.h>
int main()
{
    int num1,num2;
    printf("enter any value");
    scanf("%d",&num1);
    printf("enter another value");
    scanf("%d",&num2);
    if(num1>num2)
    {
        printf("num1 is greater");
    }
    else
    {
        printf("num2 is greater");
    }
    return 0;
}