#include <stdio.h>
int main()
{
    int num1[50];
    printf("enter 10 values");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num1[i]);
    }
    printf("your 4th ,7th and 9th values are : %d %d %d",num1[3],num1[6],num1[8]);
    return 0;
}