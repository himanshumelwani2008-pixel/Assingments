#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Select any two numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("addition of any two number is %d\n",num1+num2);
    printf("subtraction of any two number is %d\n",num1-num2);
    printf("division of any two number is %d\n",num1/num2);

    printf("multiplication of numbers is %d\n", num1 * num2);
    return 0;
}
