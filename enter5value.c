#include <stdio.h>
int main()
{
    int num1[10];
    printf("enter any 5 value\n");
    for (int i=0;i<5;i++)
    {
        scanf("%d",&num1[i]);

    }
    printf(" your values given are\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",num1[i]);
    }
    return 0;

}