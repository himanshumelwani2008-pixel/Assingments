#include <stdio.h>
int main()
{
    int num1,sum=0;
    for(num1=1;num1<100;num1++)
    {
        if(num1%3==0)
        {
            sum=sum+num1;
        }
    }
    printf("%d",sum);
    return 0;
}