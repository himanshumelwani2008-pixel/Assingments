#include <stdio.h>
int main()
{
    int num1,num2,temp;
    printf("choose any value\n");
    scanf("%d",&num1);
    printf("choose another value\n");
    scanf("%d",&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf ("values after swaping \n value1=%d\n value2= %d",num1,num2);
    return 0;
    
}