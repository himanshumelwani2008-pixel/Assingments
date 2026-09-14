#include <stdio.h>
int main()
{
    int num1,value,positive=0,negative=0,zeroes=0;
    for(num1=1;num1<=3;num1++)
    {
        printf("choose any number\n");
        scanf("%d",&value);
        if(value>0)
        {
            positive++;
        }
        else if(value<0)
        {
            negative++;
        }
        else
        {
            zeroes++;
        }
    
    }
    printf("no of positive value is %d\n",positive);
    printf("no of negative values is %d\n",negative);
    printf("no of zeroes are %d",zeroes);

    return 0;
}