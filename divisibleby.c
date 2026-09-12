#include<stdio.h>
int main()
{
    int num1;
    printf("choose any number\n");
    scanf("%d",&num1);
    if (num1%7==0)
    {
        printf("number is divisible by 7");

    }
    else
    {
        printf("number is not divisible by 7 ");

    }
    return 0;

}