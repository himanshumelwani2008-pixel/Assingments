#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many grams you have to convert in kg\n");
    scanf("%f", &num1);

    printf( "%f gram is equal to %f kilogram ", num1,num1/1000);
    return 0;
}
