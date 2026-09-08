#include <stdio.h>

int main()
{
    int num1;
    printf("choose how many hours you have to convert into minutes\n");
    scanf("%d", &num1);

    printf( "%d hours is equal to %d minutes ", num1,num1 *60);
    return 0;
}
