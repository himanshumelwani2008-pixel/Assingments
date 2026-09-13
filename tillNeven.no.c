#include <stdio.h>
int main()
{
    int num1,num2;
    printf("till how much you have to print\n");
    scanf("%d",&num2);
    for(num1=2;num1<=num2;num1+=2)
    {
        printf("%d\n",num1);
    }
    return 0;
}