#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many fahrenheit you have to convert in celcius\n");
    scanf("%f", &num1);

    printf( "%f fahrenheit is equal to %f celsius ", num1,num1*5/9 -32);
    return 0;
}
