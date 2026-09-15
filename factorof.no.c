#include <stdio.h>
int main()
{
    int num1,num2;
    printf("choose any number\n");
    scanf("%d",&num1);
    printf("factors of %d are:\n",num1);
    
    for(num2=1;num2<=num1;num2++)
    {
        if (num1%num2==0)
        {
            printf("%d\n",num2);
        }
    }
        
}