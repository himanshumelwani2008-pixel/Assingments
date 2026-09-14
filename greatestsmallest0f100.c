#include <stdio.h>
int main()
{
    int num1,value,greatest,smallest;
    for(num1=1;num1<=100;num1++)
    {
        printf("choose any number\n");
        scanf("%d",&value);
        if(num1==1)
        {
            greatest=value;
            smallest=value;
        }
        else
        {
            if (value>greatest)
            {
                greatest=value;
            }
            if (value<smallest)
            {
                smallest=value;
            }

        }
        
    }
    printf("greatest number is %d\n",greatest);
        printf("smallest numbe is %d",smallest);
    return 0;
}