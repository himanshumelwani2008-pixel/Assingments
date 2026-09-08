#include <stdio.h>

int main()
{
    float num1;
    printf("choose how many bytes you have to convert in KB\nMB\nGB\n");
    scanf("%f", &num1);

    printf( "%f byte is equal to KB=%f\n MB=%f\n GB=%f ", num1,num1/1000,num1/1000000,num1=1000000000);   
    return 0;