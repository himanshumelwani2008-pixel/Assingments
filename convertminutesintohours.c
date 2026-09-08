#include <stdio.h>

int main()
{
    int num1;
    printf("choose how many minutes you have to convert into hours\n");
    scanf("%d", &num1);

    printf( "%d minutes is equal to %d hours ", num1,num1 /60);
    return 0;
}
