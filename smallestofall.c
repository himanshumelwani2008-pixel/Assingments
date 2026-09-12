#include <stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter any value");
    scanf("%d",&num1);
    printf("enter another value");
    scanf("%d",&num2);
    printf("choose another value");
    scanf("%d",&num3);
    {
    if(num1>=num3 && num2>num3)
    {
        printf("num3 is smalllest ");
    }
    else if (num2>num1 &&num3>num1)
    {
        printf("num1 is smallest");
    }
    else if(num3>num2 && num1>num2)
    {
        printf("num2 is smallest");
    }
    };
    return 0;
}