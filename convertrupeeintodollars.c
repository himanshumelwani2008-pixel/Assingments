#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many rupees you have to convert in dollars\n");
    scanf("%f", &num1);

    printf( "%f rupees is equal to %f dollars ", num1,num1/48);
    return 0;
}
