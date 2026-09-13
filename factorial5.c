#include <stdio.h>
int main()
{
    int num1,factorial=1;
    for(num1=1;num1<=5;num1++)
    {
        factorial=factorial*num1;
    }
    printf("factoriall of 5 is %d",factorial);
    return 0;
}