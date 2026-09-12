#include <stdio.h>

int main()
{
    float num1,num2,num3;
    printf("how much intrest is  on your loan?\n");
    scanf("%f", &num1);
    printf("what is your principal intrest?\n");
    scanf("%f",&num2);
    printf("in how much time you have to return it?\n");
    scanf("%f",&num3);
    printf("your intrest is %f",num1*num2*num3/100);
    return 0;
}
