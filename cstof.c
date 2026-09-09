#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many celsius you have to convert in fahrenheit \n");
    scanf("%f", &num1);

    printf( "%f celsius is equal to %f fahrenheit ", num1,num1*9/5+32);
    return 0;
}

