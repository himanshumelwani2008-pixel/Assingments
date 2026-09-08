#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many kilograms you have to convert in grmas\n");
    scanf("%f", &num1);

    printf( "%f kilograms is equal to %f grams ", num1,num1*1000);
    return 0;
}
