#include <stdio.h>
int main()
{
    int num1,num2;
    char name[30];
    printf("what you have to print?\n");
    scanf("%29s",&name);
    printf("how much times you have to print it?\n");
    scanf("%d",&num2);
    for(num1=1;num1<=num2;num1++)
    {
        printf("%d %s\n",num1,name);
    }
    return 0;
    
}