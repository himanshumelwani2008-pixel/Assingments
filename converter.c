#include <stdio.h>
int main()
{
    int num1;
    printf("how many byte you want to convert into KB,MB,GB");
    scanf("%d",&num1);
    printf("%d byte is equal to %d KB,%d MB,%d GB",num1,num1/1000,num1/1000000,num1/1000000000);
    return 0;
}