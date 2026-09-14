#include <stdio.h>
int main()
{
    int i,num1,sum=0;
    float mean;
    
    for(i=1;i<=10;i++)
    {
        printf("choose any number\n");
        scanf("%d",&num1);
        sum=sum+num1;
    }
    mean=sum/10;
    printf("mean of value is %f\n",mean);
    printf("sum of 10 value is %d\n",sum);
    return 0;
}