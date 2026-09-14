#include <stdio.h>
int main()
{
    int num1;
    for(num1=1;num1<=100;num1++)
    {
        if(num1%5==0)
        {
            printf("%d\n",num1);
        }
    }
    
    return 0;
}