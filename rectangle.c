#include <stdio.h>
int main()
{
    int num1,num2;
    printf("what is the length  of side of square\n");
    scanf("%d",&num2);
    printf("what is width of side of rectangle?");
    scanf("%d",&num1);
    printf("area of rectangle = %d\n",num1*num2);
    printf("perimeter of rectangle= %d",2*(num1+num2));
    return 0;

}